//
// Created by Retro Joella on 4/21/21.
//

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
}

Cure::Cure(const Cure & other) : AMateria("cure") {
	_name = other._name;
}

Cure::~Cure() {

}

Cure & Cure::operator=(const Cure & other) {
	_name = other._name;
	return (*this);
}

AMateria * Cure::clone() const {
	AMateria *tmp = new Cure();
	return tmp;
}

void Cure::use(ICharacter &target) {
	std::cout <<  "* heals " << target.getName() << "’s wounds *" << std::endl;
	_xp += 10;
}