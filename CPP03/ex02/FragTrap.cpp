//
// Created by Retro Joella on 4/13/21.
//

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
#include <string>

const	std::string listAttak[5] = {
		"funny attack one",
		"funny attack two",
		"funny attack three",
		"funny attack four",
		"funny attack fife"
};

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	_armorDamageReduction = 5;
	_rangedAttackDamage = 20;
	_meleeAttackDamage = 30;
	_maxEnergyPoints = 100;
	_energyPoints = 100;
	_type = "FR4G-TP";
}

FragTrap::~FragTrap() {

}

void	FragTrap::vaulthunter_dot_exe(std::string const & target) {
	if (_energyPoints - 25 >= 0) {
		std::cout << MAGENTA << _type << " " << _name << " attacks " << target << " at vault Hunter attack "
				  << listAttak[rand() % 5] << END << std::endl;
		_energyPoints = _energyPoints - 25;
	}
	else
		std::cout << "Oh NO!!! Not enough energy!" << std::endl;
}

