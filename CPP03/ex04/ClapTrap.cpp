//
// Created by Retro Joella on 4/13/21.
//

#include <string>
#include <iostream>
#include "ClapTrap.hpp"


ClapTrap::ClapTrap(std::string name) :	_hitPoints(100), _maxHitPoints(100), _level(1),
										_energyPoints(100), _maxEnergyPoints(100),
										_name(name), _meleeAttackDamage(30),
										_rangedAttackDamage(20), _armorDamageReduction (5), _type("ClapTrap") {
	std::cout << "construct ClapTrap" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destroy ClapTrup Parent " << _name << std::endl;
}

unsigned int	ClapTrap::rangedAttack(std::string const & target) {
	std::cout <<  MAGENTA << _type << " " << _name << " attacks " << END << target << " at range, causing "
			  << getRangeAttackDamage() << " points of damage!" << std::endl;
	return (_rangedAttackDamage);
}

unsigned int	ClapTrap::meleeAttack(std::string const & target) {
	std::cout << BLUE << _type << " " <<  _name << " attacks " << END << target << " at melle, causing "
			  << getMelleAttackDamage() << " points of damage!" << std::endl;
	return (_meleeAttackDamage);
}

void			ClapTrap::takeDamage(unsigned int amount) {
	std::cout << RED << _type << " " << this->_name << END << " takes total damage equal to " << amount << " - "
			  << _armorDamageReduction << " = " << BG_BLUE << BLACK << amount - _armorDamageReduction << END <<  std::endl;
	if (amount > 0) {
		if (_hitPoints - ((int)amount - _armorDamageReduction) > 0)
			_hitPoints = _hitPoints - ((int)amount - _armorDamageReduction);
		else
			_hitPoints = 0;
	}
}

void			ClapTrap::beRepaired(unsigned int amount) {
	std::cout << GREEN << this->_name << END << " be Repaired + " << amount << std::endl;
	if (_hitPoints + (int)amount < _maxHitPoints)
		_hitPoints = _hitPoints + (int)amount;
	else
		_hitPoints = 100;
}

std::string const & ClapTrap::getName() const {
	std::string const & nameRef = _name;
	return (nameRef);
}

int				ClapTrap::getMelleAttackDamage() const {return _meleeAttackDamage;};
int				ClapTrap::getRangeAttackDamage() const {return _rangedAttackDamage;}
int				ClapTrap::getHp() const {return _hitPoints;};

int 			ClapTrap::listСhar() {
	if (getHp() == 0) {
		std::cout << RED << _name << " hero is dead ☠" << END << std::endl;
	}
	else {
		std::cout <<_name << "\n" << BG_BLUE << BLACK << "HP" << END << " ---> "
				  << _hitPoints << "\n" << BG_BLUE << BLACK << "EP" << END << " ---> " << _energyPoints << std::endl;
	}
	return 0;
}