//
// Created by Retro Joella on 3/31/21.
//

#include "Brain.hpp"
#include <iostream>
#include <sstream>

Brain::Brain() {
	std::cout << "hello im Bob's brain" << std::endl;
}

Brain::~Brain() {
	std::cout << "bye bye" << std::endl;
}

std::string Brain::identify() const {
	std::stringstream	myStream;
	std::string 		myStr;
	myStream << this;
	myStream >> myStr;
	for(int i = 2; myStr[i]; i++) {
		myStr[i] = std::toupper(myStr[i]);
	}
	return(myStr);
}
