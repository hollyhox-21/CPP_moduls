//
// Created by Retro Joella on 4/18/21.
//

#ifndef CPP04_CHARACTER_HPP
#define CPP04_CHARACTER_HPP
#include "AWeapon.hpp"
#include "Enemy.hpp"
#include <string>
#include <iostream>

class Character
{
public:
	Character(std::string const & name);
	~Character();
	Character(Character const & other);
	
	Character & operator=(Character const & other);
	
	void recoverAP();
	
	void equip(AWeapon*);
	void attack(Enemy*&);
	std::string const &	getName() const;
	int					getApower() const;
	AWeapon *	getWeapon() const;

private:
	std::string		_name;
	int 			_ap;
	AWeapon *		_weapon;
};

std::ostream &		operator<<(std::ostream & o, Character const & obj);

#endif //CPP04_CHARACTER_HPP
