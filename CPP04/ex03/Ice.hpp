//
// Created by Retro Joella on 4/21/21.
//

#ifndef CPP04_ICE_HPP
#define CPP04_ICE_HPP
#include "AMateria.hpp"

class Ice : public AMateria {
public:
	Ice();
	Ice(Ice const & other);
	~Ice();
	
	Ice & operator=(Ice const & other);
	
	AMateria * clone() const;
	void use(ICharacter& target);
private:
	std::string	_name;
};
#endif //CPP04_ICE_HPP
