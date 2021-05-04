//
// Created by Retro Joella on 4/18/21.
//

#ifndef CPP04_AWEAPON_HPP
#define CPP04_AWEAPON_HPP
#include <string>

class AWeapon {
public:
	AWeapon(std::string const & name, int apcost, int damage);
	virtual ~AWeapon();
	AWeapon(AWeapon const & other);
	
	AWeapon & operator=(AWeapon const & other);
	
	std::string const &	getName() const;
	int					getAPcost() const;
	int					getDamage() const;
	virtual	void 		attack() const = 0;
	
protected:
	AWeapon();
	std::string			_name;
	int					_apcost;
	int					_damage;
};

#endif //CPP04_AWEAPON_HPP
