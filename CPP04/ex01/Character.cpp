//
// Created by Retro Joella on 4/18/21.
//

#include "Character.hpp"
#include <iostream>
#include <string>

Character::Character(std::string const & name) : _name(name), _ap(40), _weapon(nullptr){
}

Character::~Character() {

}

Character::Character(const Character &other) {
	this->_name = getName();
	this->_ap = other.getApower();
	this->_weapon = other.getWeapon();
}

Character & Character::operator=(const Character &other) {
	this->_name = other.getName();
	this->_ap = other.getApower();
	this->_weapon = other.getWeapon();
	return (*this);
}

void Character::recoverAP() {
	if (_ap + 10 < 40)
		_ap += 10;
	else
		_ap = 40;
	std::cout << "I'm recover >> " << _ap << std::endl;
}

void Character::equip(AWeapon *weapon) {
	_weapon = weapon;
}

void Character::attack(Enemy*& enemy) {
	if (_weapon && enemy) {
		std::cout << _name << " attacks " << enemy->getType() << " with a " << _weapon->getName() << std::endl;
		if (_weapon->getAPcost() < _ap) {
			_ap -= _weapon->getAPcost();
			_weapon->attack();
			enemy->takeDamage(_weapon->getDamage());
		}
		else {
			std::cout << "don't have AP" << std::endl;
			if (_ap < 0) {
				_ap = 0;
			}
		}
		if (enemy->getHP() <= 0) {
			delete enemy;
			enemy = nullptr;
		}
	}
	else {
		std::cout << _name << (_weapon ?  " don't have a target" : " don't have a weapon!") << std::endl;
	}
}

const std::string & Character::getName() const {return _name;}
int Character::getApower() const {return _ap;}
AWeapon * Character::getWeapon() const {return _weapon;}

std::ostream &		operator<<(std::ostream & o, Character const & obj){
	if (obj.getWeapon() != NULL)
		o << obj.getName() << " has " << obj.getApower() << " AP and wields a " << (*obj.getWeapon()).getName() << std::endl;
	else
		o << obj.getName() << " has " << obj.getApower() << " and is unarmed" << std::endl;
	return o;
}