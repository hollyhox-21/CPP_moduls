//
// Created by Retro Joella on 4/18/21.
//

#include "PlasmaRifle.hpp"
#include <iostream>

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21){

}

PlasmaRifle::~PlasmaRifle() {

}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &other) {
	this->_name = other.getName();
	this->_apcost = other.getAPcost();
	this->_damage = other.getDamage();
}

PlasmaRifle & PlasmaRifle::operator=(const PlasmaRifle &other) {
	this->_name = other.getName();
	this->_apcost = other.getAPcost();
	this->_damage = other.getDamage();
	return(*this);
}

void PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
