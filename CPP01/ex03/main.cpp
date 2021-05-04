//
// Created by Retro Joella on 3/31/21.
//

#include <iostream>
#include <string>
#include "ZombieHorde.hpp"


int main() {
	srand(time(0));
	
	std::cout << "Call STACK" << std::endl;
	ZombieHorde gateToHordeTwo(5);
	gateToHordeTwo.announce();
	
	std::cout << std::endl;
	
	std::cout << "Call HEAP" << std::endl;
	ZombieHorde *gateToHordeOne = new ZombieHorde(5);
	gateToHordeOne->announce();
	delete gateToHordeOne;
	
	
	std::cout << std::endl;
	
	std::cout << "Get on stack and anononce HORDE" << std::endl;
	Zombie *horde = gateToHordeTwo.getHorde();
	for (int i = 0; i < 5; ++i) {
		horde[i].announce();
	}
	
	return (0);
}