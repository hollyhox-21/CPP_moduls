//
// Created by Retro Joella on 4/14/21.
//

#ifndef CPP03_SUPERTRAP_HPP
#define CPP03_SUPERTRAP_HPP
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include <string>

class SuperTrap : public FragTrap, public NinjaTrap {
public:
	SuperTrap(std::string const name);
	~SuperTrap();
	unsigned int		rangedAttack(std::string const & target);
	unsigned int		meleeAttack(std::string const & target);
private:

};


#endif //CPP03_SUPERTRAP_HPP
