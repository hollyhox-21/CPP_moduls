//
// Created by Retro Joella on 4/16/21.
//

#include "Sorcerer.hpp"
#include <string>
#include <iostream>

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title) {
	std::cout << BRIGHT_MAGENTA << _name << ", " << _title << END << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer & other) {
	this->_name = other.getName();
	this->_title = other.getTitle();
}

Sorcerer::~Sorcerer() {
	std::cout << BRIGHT_MAGENTA << _name << ", " << _title << END << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer & Sorcerer::operator=(const Sorcerer &other) {
	this->_name = other.getName();
	this->_title = other.getTitle();
	return (*this);
}

std::string Sorcerer::getName() const {return _name;}
std::string Sorcerer::getTitle() const {return _title;}

std::ostream &		operator<<(std::ostream & o, Sorcerer const & obj){
	o << "I am " + (std::string)BRIGHT_MAGENTA + obj.getName() + ", " + obj.getTitle() + END + ", and I like ponies!" << std::endl;
	return o;
}

void	Sorcerer::anounce() const {
	std::cout << "I am " << BRIGHT_MAGENTA << _name << ", " << _title << END << ", and I like ponies!" << std::endl;
};

void Sorcerer::polymorph(const Victim & target) const {
	target.getPolymorphed();
}
