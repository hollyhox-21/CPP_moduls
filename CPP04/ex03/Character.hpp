//
// Created by Retro Joella on 4/21/21.
//

#ifndef CPP04_CHARACTER_HPP
#define CPP04_CHARACTER_HPP
class Character;
#include "ICharacter.hpp"
#include <iostream>
#include <string>

class Character : public ICharacter {
public:
	Character(std::string const & name);
	Character(Character const & other);
	~Character();
	
	Character & operator=(Character const & other);
	
	const std::string & getName() const;
	AMateria**	getStorage() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
	
private:
	std::string			_name;
	AMateria**			_storage;
	int					_busySlot;
};

#endif //CPP04_CHARACTER_HPP
