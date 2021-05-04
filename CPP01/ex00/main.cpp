//
// Created by Retro Joella on 3/30/21.
//

#include <iostream>
#include "Pony.hpp"

void ponyOnStack() {
	std::cout << "func ponyOnSTACK" << std::endl;
	Pony ponyOnStack("stack");
}

void ponyOnHeap() {
	std::cout << "func ponyOnHEAP" << std::endl;
	Pony *pony0nHeap = new Pony("heap");
	delete pony0nHeap;
}

int main () {
	Pony ponyOne("stack");
	Pony *ponyTwo = new Pony("heap");
	ponyOnStack();
	delete ponyTwo;
	ponyOnHeap();

	return (0);
}
