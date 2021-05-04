//
// Created by Retro Joella on 4/16/21.
//

#include "Peon.hpp"
#include <string>
#include <iostream>

Peon::Peon(std::string name) : Victim(name) {
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon() {
	std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed() const {
	std::cout << BRIGHT_GREEN <<  _name << END << " has been turned into a pink pony!" << std::endl;
}