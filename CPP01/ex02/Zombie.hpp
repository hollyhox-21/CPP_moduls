//
// Created by Retro Joella on 3/30/21.
//

#ifndef CCP01_ZOMBIE_HPP
# define CCP01_ZOMBIE_HPP
# include <string>

class Zombie {
public:
	Zombie();
	~Zombie();
	
	void	announce();
	void	setType(std::string type);
	void	setName(std::string name);
private:
	std::string _name;
	std::string _type;
};

#endif //CCP01_ZOMBIE_HPP
