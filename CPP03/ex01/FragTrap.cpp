//
// Created by Retro Joella on 4/11/21.
//

#include <iostream>
#include <string>
#include <cstdlib>
#include "FragTrap.hpp"

const	std::string listAttak[5] = {
		"funny attack one",
		"funny attack two",
		"funny attack three",
		"funny attack four",
		"funny attack fife"
};

FragTrap::FragTrap(std::string name) :	_hitPoints(100), _maxHitPoints(100), _level(1),
										_energyPoints(100), _maxEnergyPoints(100),
										_name(name), _meleeAttackDamage(30),
										_rangedAttackDamage(20), _armorDamageReduction (5) {
	std::cout << "construct FragTrap" << _level << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "im die " << this->_name << std::endl;
}

unsigned int	FragTrap::rangedAttack(std::string const & target) {
	std::cout << "FR4G-TP " <<  _name << " attacks " << target << " at range, causing "
	<< getRangeAttackDamage() << " points of damage!" << std::endl;
	return (_rangedAttackDamage);
}

unsigned int	FragTrap::meleeAttack(std::string const & target) {
	std::cout << "FR4G-TP " <<  _name << " attacks " << target << " at melle, causing "
	<< getMelleAttackDamage() << " points of damage!" << std::endl;
	return (_meleeAttackDamage);
}

void			FragTrap::takeDamage(unsigned int amount) {
	std::cout << "FR4G-TP " << this->_name << " takes total damage equal to " << amount << " - "
	<< _armorDamageReduction << std::endl;
	if (amount > 0) {
		if (_hitPoints - ((int)amount - _armorDamageReduction) > 0)
			_hitPoints = _hitPoints - ((int)amount - _armorDamageReduction);
		else
			_hitPoints = 0;
	}
}

void			FragTrap::beRepaired(unsigned int amount) {
	std::cout << this->_name << " be Repaired + " << amount << std::endl;
	if (_hitPoints + (int)amount < _maxHitPoints)
		_hitPoints = _hitPoints + (int)amount;
	else
		_hitPoints = 100;
	if (_energyPoints + (int)amount < _maxEnergyPoints)
		_energyPoints = _energyPoints + (int)amount;
	else
		_energyPoints = 100;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target) {
	if (_energyPoints - 25 >= 0) {
		std::cout << "FR4G-TP " <<  _name << " attacks " << target << " at vault Hunter attack "
				  << listAttak[rand() % 5] << std::endl;
		_energyPoints = _energyPoints - 25;
	}
	else
		std::cout << "Oh NO!!! Not enough energy!" << std::endl;
}

std::string const & FragTrap::getName() const {
	std::string const & nameRef = _name;
	return (nameRef);
}

int		FragTrap::getMelleAttackDamage() const {return _meleeAttackDamage;};
int		FragTrap::getRangeAttackDamage() const {return _rangedAttackDamage;}

int FragTrap::listСhar() {
	std::cout << _name << "\n" << "HP ---> "
	<< _hitPoints << "\n" << "EP ---> "<< _energyPoints << std::endl;
	return 0;
}