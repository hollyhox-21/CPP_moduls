//
// Created by Retro Joella on 4/18/21.
//

#ifndef CPP04_POWERFIST_HPP
#define CPP04_POWERFIST_HPP
#include "AWeapon.hpp"

class PowerFist : public AWeapon {
public:
	PowerFist();
	virtual ~PowerFist();
	PowerFist(PowerFist const & other);
	
	PowerFist & operator=(PowerFist const & other);
	
	void	attack() const;
private:

};
#endif //CPP04_POWERFIST_HPP
