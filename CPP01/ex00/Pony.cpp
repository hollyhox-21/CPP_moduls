//
// Created by Retro Joella on 3/30/21.
//

#include "Pony.hpp"
#include <string>
#include <iostream>


Pony::Pony(const std::string &where) {
	this->_where = where;
	Pony::_count++;
	if (where == "stack") {
		std::cout << "Hello im Pony #--->|" << _count << "| 🐎 on the "<< this->_where << " 📚" << std::endl;
	}
	if (where == "heap") {
		std::cout << "Hello im Pony #--->|" << _count << "| 🐎 on the "<< this->_where << " ⛰" << std::endl;
	}
	
}

Pony::~Pony() {
	if (this->_where == "stack") {
		std::cout << "My days are over #--->|" << _count << "|💀 on " << this->_where << " 📚" << std::endl;
	}
	if (this->_where == "heap") {
		std::cout << "My days are over #--->|" << _count << "|💀 on " << this->_where << " ⛰" << std::endl;
	}
	Pony::_count--;
}

int Pony::_count = 0;

