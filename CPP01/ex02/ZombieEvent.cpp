//
// Created by Retro Joella on 3/30/21.
//

#include <string>
#include "ZombieEvent.hpp"
#include <cstdlib>
#include <iostream>

ZombieEvent::ZombieEvent(std::string name) : _name(name) {
	std::cout << "Let's do party--->|" << _name << "|!!!11" << std::endl;
}

ZombieEvent::~ZombieEvent() {
	std::cout << "Party is over " << _name << std::endl;
}

Zombie*				ZombieEvent::randomChump() {
	Zombie* myZombie = newZombie(setZombieName());
	
	return (myZombie);
}

std::string const	ZombieEvent::setZombieName() {
	std::string nameZombie[5] = {
			"Pol",
			"Mike",
			"Lize",
			"Anny",
			"Greg"
	};
	
	return (nameZombie[rand() % 5]);
}

void				ZombieEvent::setZombieType(Zombie *myZombie) {
	std::string typeZombie[5] = {
			"Runners",
			"Voodoo Zombie",
			"Ghoul",
			"Crawler",
			"Bonies",
	};
	
	myZombie->setType(typeZombie[rand() % 5]);
}

Zombie*				ZombieEvent::newZombie(std::string name) {
	Zombie *tmpZombie = new Zombie;
	setZombieType(tmpZombie);
	tmpZombie->setName(name);
	tmpZombie->announce();
	return (tmpZombie);
}
