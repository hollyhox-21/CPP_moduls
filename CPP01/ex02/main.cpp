//
// Created by Retro Joella on 3/30/21.
//

#include <string>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void	closeParty() {
	ZombieEvent *privGate = new ZombieEvent("CLOSEP");
	Zombie		*zombieOne = privGate->randomChump();
	Zombie		*zombieTwo = privGate->randomChump();
	Zombie		*zombieThree = privGate->randomChump();
	
	delete zombieOne;
	delete zombieTwo;
	delete zombieThree;
	delete privGate;
	
}

void	raveParty(ZombieEvent& gate) {
	Zombie *zombiOne = gate.randomChump();
	Zombie *zombieTwo = gate.randomChump();
	Zombie *zombieThree = gate.randomChump();
	
	delete zombiOne;
	delete zombieTwo;
	delete zombieThree;
	
}

int main() {
	srand(time(0));
	ZombieEvent gate("RAVEP");
	Zombie zombieAlone;
	zombieAlone.setName("Raf");
	zombieAlone.setType("Alone");
	zombieAlone.announce();
	
	raveParty(gate);
	closeParty();
	return (0);
}
