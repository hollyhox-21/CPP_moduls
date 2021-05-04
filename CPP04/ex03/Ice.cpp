//
// Created by Retro Joella on 4/21/21.
//

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
}

Ice::Ice(const Ice &other) : AMateria("ice") {
	_name = other._name;
}

Ice::~Ice() {

}

Ice & Ice::operator=(const Ice &other) {
	_name = other._name;
	return (*this);
}

AMateria * Ice::clone() const {
	AMateria *tmp = new Ice();
	return tmp;
}

void Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	_xp += 10;
}





