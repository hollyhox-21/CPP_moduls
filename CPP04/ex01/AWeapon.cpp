//
// Created by Retro Joella on 4/18/21.
//

#include "AWeapon.hpp"
#include <string>

AWeapon::AWeapon() {

}

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage) {

}

AWeapon::~AWeapon() {

}

AWeapon::AWeapon(const AWeapon &other) {
	this->_name = other.getName();
	this->_damage = other.getDamage();
	this->_apcost = other.getAPcost();
}

AWeapon & AWeapon::operator=(const AWeapon &other) {
	this->_name = other.getName();
	this->_damage = other.getDamage();
	this->_apcost = other.getAPcost();
	return (*this);
}

const std::string &	AWeapon::getName() const {return _name;}
int					AWeapon::getAPcost() const {return _apcost;}
int					AWeapon::getDamage() const {return _damage;}