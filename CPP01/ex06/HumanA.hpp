#include <__bit_reference>
//
// Created by Retro Joella on 3/31/21.
//

#ifndef CCP01_HUMANA_HPP
# define CCP01_HUMANA_HPP
# include <string>
# include "Weapon.hpp"

class HumanA {
public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();
	
	void				attack();
	std::string const &	getName() const;
	Weapon const &		getWeapon() const;
	
private:
	std::string _name;
	Weapon&		_weapon;
};

#endif //CCP01_HUMANA_HPP
