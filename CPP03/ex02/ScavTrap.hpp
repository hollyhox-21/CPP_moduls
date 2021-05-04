//
// Created by Retro Joella on 4/13/21.
//

#ifndef CPP03_SCAVTRAP_HPP
#define CPP03_SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
	ScavTrap(std::string name);
	~ScavTrap();
	
	void		challengeNewcomer();
private:

};

#endif //CPP03_SCAVTRAP_HPP
