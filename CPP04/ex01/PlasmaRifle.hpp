//
// Created by Retro Joella on 4/18/21.
//

#ifndef CPP04_PLASMARIFLE_HPP
#define CPP04_PLASMARIFLE_HPP
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {
public:
	PlasmaRifle();
	virtual ~PlasmaRifle();
	PlasmaRifle(PlasmaRifle const & other);
	
	PlasmaRifle & operator=(PlasmaRifle const & other);
	
	void	attack() const;
private:
};

#endif //CPP04_PLASMARIFLE_HPP
