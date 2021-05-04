//
// Created by Retro Joella on 4/18/21.
//

#ifndef CPP04_RADSCORPION_HPP
#define CPP04_RADSCORPION_HPP
#include "Enemy.hpp"

class RadScorpion : public Enemy {
public:
	RadScorpion();
	virtual ~RadScorpion();
	RadScorpion(RadScorpion const & other);
	
	RadScorpion & operator=(RadScorpion const & other);
private:
};

#endif //CPP04_RADSCORPION_HPP
