//
// Created by Retro Joella on 3/31/21.
//

#ifndef CCP01_HUMANB_HPP
#define CCP01_HUMANB_HPP
# include <string>
# include "Weapon.hpp"

class HumanB {
public:
	HumanB(std::string name);
	~HumanB();

	void				attack();
	void				setWeapon(Weapon& weapon);
	std::string const &	getName() const;
	Weapon const &		getWeapon() const;
private:
	std::string _name;
	Weapon*		_weapon;

};

#endif //CCP01_HUMANB_HPP
