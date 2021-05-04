//
// Created by Retro Joella on 4/13/21.
//

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include <string>

const	std::string listAttak[5] = {
		"funny challenge one",
		"funny challenge two",
		"funny challenge three",
		"funny challenge four",
		"funny challenge fife"
};

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	_armorDamageReduction = 3;
	_rangedAttackDamage = 15;
	_meleeAttackDamage = 20;
	_maxEnergyPoints = 50;
	_energyPoints = 50;
	_type = "SC4V-TP";
	std::cout << "construct ScavTrup " << _name << " " << _level << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "Destroy ScavTrup " << _name << std::endl;
}

void	ScavTrap::challengeNewcomer(std::string const & target) {
	if (_energyPoints - 25 >= 0) {
		std::cout << YELLOW <<  _type << " " << _name << ":and now the challenge for " << target <<  " !!! " << listAttak[rand() % 5] << END << std::endl;
		_energyPoints = _energyPoints - 25;
	}
	else
		std::cout << "Oh NO!!! not enough energy!" << std::endl;
}