//
// Created by Retro Joella on 4/14/21.
//

#include "NinjaTrap.hpp"
#include <string>
#include <iostream>

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name) {
	_hitPoints = 60;
	_maxHitPoints = 60;
	_armorDamageReduction = 0;
	_rangedAttackDamage = 5;
	_meleeAttackDamage = 60;
	_maxEnergyPoints = 120;
	_energyPoints = 120;
	_type = "NINJ4-TP";
	std::cout << "construct NinjaTrup " << _name << " " << _level<< std::endl;
}

NinjaTrap::~NinjaTrap() {
	std::cout << "Destroy NinjaTrup " << _name << std::endl;
}

unsigned int NinjaTrap::ninjaShoebox(FragTrap & target) {
	if (_energyPoints - 15 >= 0) {
		std::cout << MAGENTA << "!!!secret technique, hidden sheet!!---> " << target.getName() << END << std::endl;
		_energyPoints = _energyPoints - 15;
	}
	else
		std::cout << "Oh NO!!! Not enough energy!" << std::endl;
	return (45);
}

unsigned int  NinjaTrap::ninjaShoebox(ScavTrap &target) {
	if (_energyPoints - 15 >= 0) {
		std::cout << MAGENTA << "!!!secret technique, hidden sheet!!---> " << target.getName() << END << std::endl;
		_energyPoints = _energyPoints - 15;
	}
	else
		std::cout << "Oh NO!!! Not enough energy!" << std::endl;
	return (45);
}

unsigned int  NinjaTrap::ninjaShoebox(ClapTrap &target) {
	if (_energyPoints - 15 >= 0) {
		std::cout << MAGENTA << "!!!secret technique, hidden sheet!!---> " << target.getName() << END << std::endl;
		_energyPoints = _energyPoints - 15;
	}
	else
		std::cout << "Oh NO!!! Not enough energy!" << std::endl;
	return (45);
}

unsigned int 	NinjaTrap::ninjaShoebox(NinjaTrap & target) {
	if (_energyPoints - 15 >= 0) {
		std::cout << MAGENTA << "!!!secret technique, hidden sheet!!---> " << target.getName() << END << std::endl;
		_energyPoints = _energyPoints - 15;
	}
	else
		std::cout << "Oh NO!!! Not enough energy!" << std::endl;
	return (45);
}



