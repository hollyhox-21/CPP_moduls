//
// Created by Retro Joella on 4/21/21.
//

#include "AMateria.hpp"

AMateria::AMateria(const std::string &type) : _type(type), _xp(0){
}

AMateria::AMateria(const AMateria &other) {
	_type = other._type;
	_xp = other._xp;
}

AMateria::~AMateria() {

}

AMateria & AMateria::operator=(const AMateria &other) {
	_type = other._type;
	_xp = other._xp;
	return (*this);
}

void AMateria::use(ICharacter &target) {
	std::cout << "Method Amateria " << target.getName() << std::endl;
	_xp+=10;
}

unsigned int		AMateria::getXP() const {return _xp;}
const std::string &	AMateria::getType() const {return _type;}

