//
// Created by Retro Joella on 4/21/21.
//

#include "Character.hpp"

Character::Character(std::string const & name) : ICharacter(), _name(name), _busySlot(0) {
	_storage = new AMateria*[4];
	for (int i = 0; i < 4; ++i)
		_storage[i] = nullptr;
}

Character::Character(Character const &other) {
	_name = other._name;
	_storage = new AMateria*[4];
	_busySlot = other._busySlot;
	for (int i = 0; i < 4; ++i)
		_storage[i] = other._storage[i]->clone();
}

Character::~Character() {
	for (int i = 0; i < 4; ++i)
		delete _storage[i];
	delete _storage;
}

Character & Character::operator=(const Character &other) {
	_name = other._name;
	_storage = new AMateria*[4];
	_busySlot = other._busySlot;
	for (int i = 0; i < 4; ++i)
		_storage[i] = other._storage[i]->clone();
	return (*this);
}

void Character::equip(AMateria *m) {
	if (_busySlot < 4) {
		_storage[_busySlot] = m;
		_busySlot++;
	}
	else
		std::cout << "Full storage!!" << std::endl;
}

void Character::unequip(int idx) {
	if (idx < 4 && idx >= 0) {
		_storage[idx] = nullptr;
	}
	else
		std::cout << "Invalid idx" << std::endl;
}

void Character::use(int idx, ICharacter &target) {
	_storage[idx]->use(target);
}

const std::string & Character::getName() const {return _name;}
AMateria ** Character::getStorage() const {return _storage;}