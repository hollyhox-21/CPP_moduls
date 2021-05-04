//
// Created by Retro Joella on 4/18/21.
//

#include "RadScorpion.hpp"
#include <iostream>

RadScorpion::RadScorpion() : Enemy( 80, "RadScorpion") {
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion() {
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &other) {
	this->_type = other.getType();
	this->_hp = other.getHP();
}

RadScorpion & RadScorpion::operator=(const RadScorpion &other) {
	this->_type = other.getType();
	this->_hp = other.getHP();
	
	return (*this);
}