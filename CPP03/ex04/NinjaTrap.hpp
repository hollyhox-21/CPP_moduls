//
// Created by Retro Joella on 4/14/21.
//

#ifndef CPP03_NINJATRAP_HPP
#define CPP03_NINJATRAP_HPP
#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap {
public:
	NinjaTrap(std::string name = "none");
	~NinjaTrap();
	
	
	
	unsigned int	ninjaShoebox(FragTrap & target);
	unsigned int 	ninjaShoebox(ScavTrap & target);
	unsigned int 	ninjaShoebox(ClapTrap & target);
	unsigned int 	ninjaShoebox(NinjaTrap & target);
protected:

};


#endif //CPP03_NINJATRAP_HPP
