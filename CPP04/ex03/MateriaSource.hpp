//
// Created by Retro Joella on 4/21/21.
//

#ifndef CPP04_MATERIASOURCE_HPP
#define CPP04_MATERIASOURCE_HPP
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <string>

class MateriaSource : public IMateriaSource{
public:
	MateriaSource();
	MateriaSource(MateriaSource const &);
	~MateriaSource();
	
	MateriaSource &	operator=(MateriaSource const &);
	
	void learnMateria(AMateria *);
	AMateria * createMateria(const std::string &type);
	
private:
	AMateria**			_storage;
	int					_busySlot;

};
#endif //CPP04_MATERIASOURCE_HPP
