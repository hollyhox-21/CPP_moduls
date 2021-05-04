//
// Created by Retro Joella on 4/13/21.
//

#ifndef CPP03_SCAVTRAP_HPP
#define CPP03_SCAVTRAP_HPP
#include <string>

class ScavTrap{
public:
	ScavTrap(std::string name);
	~ScavTrap();
	unsigned int		rangedAttack(std::string const & target);
	unsigned int		meleeAttack(std::string const & target);
	void				takeDamage(unsigned int amount);
	void				beRepaired(unsigned int amount);
	std::string const &	getName() const;
	int 				listСhar();
	void				challengeNewcomer();
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


#endif //CPP03_SCAVTRAP_HPP
