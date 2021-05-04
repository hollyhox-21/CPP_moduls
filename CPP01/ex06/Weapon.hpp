//
// Created by Retro Joella on 3/31/21.
//

#ifndef CCP01_WEAPON_HPP
#define CCP01_WEAPON_HPP
# include <string>

class Weapon {
public:
	Weapon(std::string type);
	~Weapon();
	
	std::string const &	getType() const;
	void 				setType(std::string type);

private:
	std::string	_type;
};

#endif //CCP01_WEAPON_HPP
