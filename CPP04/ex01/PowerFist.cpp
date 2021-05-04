//
// Created by Retro Joella on 4/18/21.
//

#include "PowerFist.hpp"
#include <iostream>

PowerFist::PowerFist() : AWeapon( "Power Fist", 8, 50) {

}

PowerFist::~PowerFist() {

}

PowerFist::PowerFist(const PowerFist &other) {
	this->_name = other.getName();
	this->_apcost = other.getAPcost();
	this->_damage = other.getDamage();
}

PowerFist & PowerFist::operator=(const PowerFist &other) {
	this->_name = other.getName();
	this->_apcost = other.getAPcost();
	this->_damage = other.getDamage();
	return (*this);
}

void PowerFist::attack() const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}