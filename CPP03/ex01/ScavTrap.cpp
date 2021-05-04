//
// Created by Retro Joella on 4/13/21.
//

#include "ScavTrap.hpp"
#include <iostream>

const	std::string listAttak[5] = {
		"funny challenge one",
		"funny challenge two",
		"funny challenge three",
		"funny challenge four",
		"funny challenge fife"
};

ScavTrap::ScavTrap(std::string name) :	_hitPoints(100), _maxHitPoints(100), _level(1),
										_energyPoints(50), _maxEnergyPoints(50),
										_name(name), _meleeAttackDamage(20),
										_rangedAttackDamage(15), _armorDamageReduction (3) {
	std::cout << "construct FragTrap" << _level << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "im die " << this->_name << std::endl;
}

unsigned int	ScavTrap::rangedAttack(std::string const & target) {
	std::cout << "SK4V-TP " <<  _name << " attacks " << target << " at range, causing "
			  << getRangeAttackDamage() << " points of damage!" << std::endl;
	return (_rangedAttackDamage);
}

unsigned int	ScavTrap::meleeAttack(std::string const & target) {
	std::cout << "SK4V-TP " <<  _name << " attacks " << target << " at melle, causing "
			  << getMelleAttackDamage() << " points of damage!" << std::endl;
	return (_meleeAttackDamage);
}

void			ScavTrap::takeDamage(unsigned int amount) {
	std::cout << "SK4V-TP " << this->_name << " takes total damage equal to " << amount << " - "
			  << _armorDamageReduction << std::endl;
	if (amount > 0) {
		if (_hitPoints - ((int)amount - _armorDamageReduction) > 0)
			_hitPoints = _hitPoints - ((int)amount - _armorDamageReduction);
		else
			_hitPoints = 0;
	}
}

void			ScavTrap::beRepaired(unsigned int amount) {
	std::cout << this->_name << " be Repaired + " << amount << std::endl;
	if (_hitPoints + (int)amount < _maxHitPoints)
		_hitPoints = _hitPoints + (int)amount;
	else
		_hitPoints = 50;
	if (_energyPoints + (int)amount < _maxEnergyPoints)
		_energyPoints = _energyPoints + (int)amount;
	else
		_energyPoints = 50;
}

void	ScavTrap::challengeNewcomer() {
	if (_energyPoints - 25 >= 0) {
		std::cout << "SK4V-TP " <<  _name << ":and now the challenge!!! " << listAttak[rand() % 5] << std::endl;
		_energyPoints = _energyPoints - 25;
	}
	else
		std::cout << "Oh NO!!! not enough energy!" << std::endl;
}

std::string const & ScavTrap::getName() const {
	std::string const & nameRef = _name;
	return (nameRef);
}

int		ScavTrap::getMelleAttackDamage() const {return _meleeAttackDamage;};
int		ScavTrap::getRangeAttackDamage() const {return _rangedAttackDamage;}

int ScavTrap::listСhar() {
	std::cout << _name << "\n" << "HP ---> "
			  << _hitPoints << "\n" << "EP ---> " << _energyPoints << std::endl;
	return 0;
}