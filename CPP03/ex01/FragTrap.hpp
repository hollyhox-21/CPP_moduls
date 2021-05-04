//
// Created by Retro Joella on 4/11/21.
//

#ifndef CPP03_FRAGTRAP_HPP
#define CPP03_FRAGTRAP_HPP
#include <iostream>
#include <string>

class FragTrap {
public:
	FragTrap(std::string);
	~FragTrap();
	
	unsigned int		rangedAttack(std::string const & target);
	unsigned int		meleeAttack(std::string const & target);
	void				takeDamage(unsigned int amount);
	void				beRepaired(unsigned int amount);
	std::string const &	getName() const;
	int 				listСhar();
	void				vaulthunter_dot_exe(std::string const & target);
	int					getMelleAttackDamage() const;
	int					getRangeAttackDamage() const;
	
private:
	int					_hitPoints;
	int					_maxHitPoints;
	int					_level;
	int					_energyPoints;
	int					_maxEnergyPoints;
	std::string const	_name;
	int					_meleeAttackDamage;
	int					_rangedAttackDamage;
	int					_armorDamageReduction;
	
};

#endif //CPP03_FRAGTRAP_HPP
