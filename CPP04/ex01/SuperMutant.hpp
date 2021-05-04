//
// Created by Retro Joella on 4/18/21.
//

#ifndef CPP04_SUPERMUTANT_HPP
#define CPP04_SUPERMUTANT_HPP
#include "Enemy.hpp"

class SuperMutant : public Enemy {
public:
	SuperMutant();
	virtual ~SuperMutant();
	SuperMutant(SuperMutant const & other);
	
	SuperMutant & operator=(SuperMutant const & other);
	
	void takeDamage(int);
	
private:
};


#endif //CPP04_SUPERMUTANT_HPP
