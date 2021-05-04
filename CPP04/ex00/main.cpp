//
// Created by Retro Joella on 4/16/21.
//

#include <iostream>
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"


int	main () {
	Sorcerer robert("Robert", "the Magnificent");
	Peon joe("Joe");
	Victim jim("Jimmy");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
	
//	Peon * a = new Peon("asdfg");
//	delete a;
//
	return 0;
}
