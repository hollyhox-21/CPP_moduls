//
// Created by Retro Joella on 3/31/21.
//

#include <iostream>
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : _name(name) { }

HumanB::~HumanB() { }

void				HumanB::attack() {
		std::cout << getName() << " attacks with his " <<  getWeapon().getType() << std::endl;
}

std::string const &	HumanB::getName() const {
	return (this->_name);
}

Weapon const &		HumanB::getWeapon() const {
	return (*this->_weapon);
}

void				HumanB::setWeapon(Weapon& weapon) {
	this->_weapon = &weapon;
}
