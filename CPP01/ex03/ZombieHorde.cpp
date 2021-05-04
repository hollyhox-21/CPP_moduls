//
// Created by Retro Joella on 3/31/21.
//

#include "ZombieHorde.hpp"
#include "Zombie.hpp"
#include <string>

ZombieHorde::ZombieHorde(int countZombie) : _sizeHorde(countZombie){
	_zombieHorde = new Zombie[_sizeHorde];
	for (int i = 0; i < _sizeHorde; ++i) {
		setZombieName(_zombieHorde[i]);
		setZombieType(_zombieHorde[i]);
	}
}

ZombieHorde::~ZombieHorde() {
	delete [] _zombieHorde;
}

void				ZombieHorde::announce() {
	for (int i = 0; i < _sizeHorde; ++i) {
		_zombieHorde[i].announce();
	}
}

Zombie*				ZombieHorde::getHorde() const {
	return (this->_zombieHorde);
}

void				ZombieHorde::setZombieName(Zombie& myZombie) {
	std::string nameZombie[5] = {
			"Pol",
			"Mike",
			"Lize",
			"Anny",
			"Greg"
	};
	
	myZombie.setName(nameZombie[rand() % 5]);
}

void				ZombieHorde::setZombieType(Zombie& myZombie) {
	std::string typeZombie[5] = {
			"Runners",
			"Voodoo Zombie",
			"Ghoul",
			"Crawler",
			"Bonies",
	};
	
	myZombie.setType(typeZombie[rand() % 5]);
}
