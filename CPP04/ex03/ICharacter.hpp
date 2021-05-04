//
// Created by Retro Joella on 4/21/21.
//

#ifndef CPP04_ICHARACTER_HPP
#define CPP04_ICHARACTER_HPP
class ICharacter;
#include <string>
#include "AMateria.hpp"

class ICharacter {
public:
	virtual ~ICharacter() {}
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
	virtual AMateria**	getStorage() const = 0;
};


#endif //CPP04_ICHARACTER_HPP
