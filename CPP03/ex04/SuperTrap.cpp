//
// Created by Retro Joella on 4/14/21.
//

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
#include <string>
#include <iostream>

SuperTrap::SuperTrap(std::string const name) : ClapTrap(name) , FragTrap(), NinjaTrap() {
	_hitPoints = 100;
	_maxHitPoints = 100;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	_energyPoints = 120;
	_maxEnergyPoints = 120;
	_meleeAttackDamage = 60;
	_type = "SUPER-TP";
	std::cout << "construct SuperTrap " << _name << " " << _level<< std::endl;
}

SuperTrap::~SuperTrap() {
	std::cout << "Destroy SuperTrup " << std::endl;
}

unsigned int SuperTrap::meleeAttack(std::string const & target) {
	return NinjaTrap::meleeAttack(target);
}

unsigned int SuperTrap::rangedAttack(const std::string &target) {
	return FragTrap::rangedAttack(target);
}