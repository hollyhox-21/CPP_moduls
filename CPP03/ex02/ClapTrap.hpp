//
// Created by Retro Joella on 4/13/21.
//

#ifndef CPP03_CLAPTRAP_HPP
#define CPP03_CLAPTRAP_HPP
#include <string>
#define BLACK ("\x1B[30m")
#define RED ("\x1B[91m")
#define GREEN ("\x1B[92m")
#define YELLOW ("\x1B[93m")
#define BLUE ("\x1B[94m")
#define MAGENTA ("\x1B[95m")
#define BG_BLUE ("\x1B[104m")
#define END ("\033[0m")

class ClapTrap {
public:
	ClapTrap(std::string name);
	~ClapTrap();
	
	unsigned int		rangedAttack(std::string const & target);
	unsigned int		meleeAttack(std::string const & target);
	void				takeDamage(unsigned int amount);
	void				beRepaired(unsigned int amount);
	std::string const &	getName() const;
	int 				listСhar();
	int					getMelleAttackDamage() const;
	int					getRangeAttackDamage() const;
	int					getHp() const;
	
protected:
	int					_hitPoints;
	int					_maxHitPoints;
	int					_level;
	int					_energyPoints;
	int					_maxEnergyPoints;
	std::string const	_name;
	int					_meleeAttackDamage;
	int					_rangedAttackDamage;
	int					_armorDamageReduction;
	std::string			_type;
};

#endif //CPP03_CLAPTRAP_HPP
