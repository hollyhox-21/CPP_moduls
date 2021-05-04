//
// Created by Retro Joella on 4/19/21.
//

#ifndef CPP04_TACTICALMARINE_HPP
#define CPP04_TACTICALMARINE_HPP
#include "ISpaceMarine.hpp"
#include <string>
#include <iostream>

class TacticalMarine : public ISpaceMarine {
public:
	TacticalMarine();
	virtual ~TacticalMarine();
	
	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
	
private:
};


#endif //CPP04_TACTICALMARINE_HPP
