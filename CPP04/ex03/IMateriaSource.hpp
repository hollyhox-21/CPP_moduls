//
// Created by Retro Joella on 4/21/21.
//

#ifndef CPP04_IMATERIASOURCE_HPP
#define CPP04_IMATERIASOURCE_HPP
class AMateria;
#include "AMateria.hpp"
class IMateriaSource {
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif //CPP04_IMATERIASOURCE_HPP
