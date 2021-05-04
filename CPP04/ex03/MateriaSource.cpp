//
// Created by Retro Joella on 4/21/21.
//

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : IMateriaSource(), _busySlot(0) {
	_storage = new AMateria*[4];
	for (int i = 0; i < 4; ++i)
		_storage[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource & other) {
	_storage = new AMateria*[4];
	_busySlot = other._busySlot;
	for (int i = 0; i < 4; ++i)
		_storage[i] = other._storage[i]->clone();
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; ++i)
		delete _storage[i];
	delete _storage;
}

MateriaSource & MateriaSource::operator=(const MateriaSource & other) {
	_storage = new AMateria*[4];
	_busySlot = other._busySlot;
	for (int i = 0; i < 4; ++i)
		_storage[i] = other._storage[i]->clone();
	return (*this);
}

void MateriaSource::learnMateria(AMateria* tmp) {
	if (_busySlot < 4) {
		_storage[_busySlot] = tmp;
		_busySlot++;
	}
	else
		std::cout << "Full storage!!" << std::endl;
}

AMateria * MateriaSource::createMateria(const std::string &type) {
	if (type == "ice") {
		Ice ice;
		return ice.clone();
	}
	else if (type == "cure") {
		Cure cure;
		return cure.clone();
	}
	else {
		std::cout << "Invalid type of materia!" << std::endl;
		return nullptr;
	}
}

