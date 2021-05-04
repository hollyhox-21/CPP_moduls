//
// Created by Retro Joella on 4/19/21.
//

#ifndef CPP04_ASSAULTTERMINATOR_HPP
#define CPP04_ASSAULTTERMINATOR_HPP
#include "ISpaceMarine.hpp"
#include <string>
#include <iostream>

class AssaultTerminator : public ISpaceMarine {
public:
	AssaultTerminator();
	virtual ~AssaultTerminator();
	
	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
	
private:
};
#endif //CPP04_ASSAULTTERMINATOR_HPP
