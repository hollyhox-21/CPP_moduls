#include <__bit_reference>
//
// Created by Retro Joella on 3/31/21.
//

#include <iostream>
#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon) { }

HumanA::~HumanA() { }

void	HumanA::attack() {
	std::cout << getName() << " attacks with his " <<  getWeapon().getType() << std::endl;
}

std::string const &		HumanA::getName() const {
	return (this->_name);
}
Weapon const &			HumanA::getWeapon() const {
	return(this->_weapon);
}

