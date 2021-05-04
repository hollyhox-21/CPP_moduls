//
// Created by Retro Joella on 4/21/21.
//

#ifndef CPP04_CURE_HPP
#define CPP04_CURE_HPP
#include "AMateria.hpp"

class Cure : public AMateria {
public:
	Cure();
	Cure(Cure const &);
	~Cure();
	
	Cure & operator=(Cure const &);
	
	AMateria * clone() const;
	void use(ICharacter& target);
private:
	std::string	_name;
};

#endif //CPP04_CURE_HPP
