//
// Created by Retro Joella on 4/16/21.
//

#include "Victim.hpp"
#include "Sorcerer.hpp"
#include <string>
#include <iostream>

Victim::Victim(std::string name) : _name(name) {
	std::cout << "Some random victim called " << BRIGHT_GREEN <<  _name << END << " just appeared!" << std::endl;
}

Victim::Victim(const Victim &other) {
	this->_name = other.getName();
}

Victim::~Victim() {
	std::cout << "Victim " << BRIGHT_GREEN << _name << END << " just died for no apparent reason!" << std::endl;
}

Victim & Victim::operator=(const Victim &other) {
	this->_name = other.getName();
	return (*this);
}

void Victim::anounce() const {
	std::cout << "I'm " << BRIGHT_GREEN << _name << END << " and I like otters!" << std::endl;
}

void Victim::getPolymorphed() const {
	std::cout << BRIGHT_GREEN << _name << END << " has been turned into a cute little sheep!" << std::endl;
}

std::string	Victim::getName() const {return _name;}

std::ostream &		operator<<(std::ostream & o, Victim const & obj) {
	o << "I'm " + (std::string)BRIGHT_GREEN + obj.getName() + END + " and I like otters!" << std::endl;
	return o;
}