//
// Created by Retro Joella on 3/30/21.
//

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() { }

Zombie::~Zombie() {
	std::cout << "im die " << _name << std::endl;
}

void Zombie::announce() {
	std::cout << this->_name << " -->" << this->_type << "<--" << "Braiiiiiiinnnssss...💃" << std::endl;
}

void Zombie::setType(std::string type) {
	this->_type = type;
}

void Zombie::setName(std::string name) {
	this->_name = name;
}