//
// Created by Retro Joella on 3/31/21.
//

#include <iostream>
#include <string>
#include "Brain.hpp"
#include "Human.hpp"

Human::Human() {
	std::cout << "hello im Bob" << std::endl;
}
Human::~Human() {
	std::cout << "Bob die" << std::endl;
}

std::string	Human::identify() {
	return (this->_brainHuman.identify());
}

Brain const &	Human::getBrain() const {
	return (this->_brainHuman);
}
