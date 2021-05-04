//
// Created by Retro Joella on 4/21/21.
//

#ifndef CPP04_AMATERIA_HPP
#define CPP04_AMATERIA_HPP
class AMateria;
#include "ICharacter.hpp"
#include <string>
#include <iostream>

class AMateria {
public:
	AMateria(std::string const & type);
	AMateria(AMateria const & other);
	virtual ~AMateria();
	
	AMateria & operator=(AMateria const & other);
	
	std::string const & getType() const;
	unsigned int getXP() const;
	
	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter& target);
protected:
	std::string _type;
	unsigned int _xp;
};

#endif //CPP04_AMATERIA_HPP
