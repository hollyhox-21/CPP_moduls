//
// Created by Retro Joella on 3/31/21.
//

#include <string>
#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type){ }

Weapon::~Weapon() { }

void				Weapon::setType(std::string type) {
	this->_type = type;
}

std::string const &	Weapon::getType() const {
	return (this->_type);
}
