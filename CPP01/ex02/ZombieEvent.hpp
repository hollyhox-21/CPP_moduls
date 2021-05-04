//
// Created by Retro Joella on 3/30/21.
//

#ifndef CCP01_ZOMBIEEVENT_HPP
#define CCP01_ZOMBIEEVENT_HPP
# include <string>
# include <iostream>
# include "Zombie.hpp"

class ZombieEvent {
public:
	ZombieEvent(std::string);
	~ZombieEvent();
	
	Zombie*				randomChump();
private:
	Zombie*				newZombie(std::string name);
	std::string const	setZombieName();
	void				setZombieType(Zombie *myZombie);
	std::string const	_name;
};

#endif //CCP01_ZOMBIEEVENT_HPP
