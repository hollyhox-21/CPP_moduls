//
// Created by Retro Joella on 4/13/21.
//

#ifndef CPP03_FRAGTRAP_HPP
#define CPP03_FRAGTRAP_HPP
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
	FragTrap(std::string name);
	~FragTrap();
	
	void	vaulthunter_dot_exe(std::string const & target);
private:

};

#endif //CPP03_FRAGTRAP_HPP
