//
// Created by Retro Joella on 4/18/21.
//

#include "SuperMutant.hpp"
#include <iostream>

SuperMutant::SuperMutant() : Enemy( 170, "Super Mutant") {
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant() {
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &other) {
	this->_type = other.getType();
	this->_hp = other.getHP();
}

SuperMutant & SuperMutant::operator=(const SuperMutant &other) {
	this->_type = other.getType();
	this->_hp = other.getHP();
	
	return (*this);
}

void SuperMutant::takeDamage(int damage) {
	damage -= 3;
	if (_hp - damage >= 0) {
		_hp -= damage;
	}
	else {
		_hp = 0;
	}
}