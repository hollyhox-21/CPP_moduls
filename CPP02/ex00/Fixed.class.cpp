//
// Created by Retro Joella on 4/2/21.
//

#include <iostream>
#include "Fixed.class.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->_fixNumb = 0;
}

Fixed::Fixed(const Fixed &other) {
	std::cout << "Copy constructor called" << std::endl;
	this->_fixNumb = other.getRawBits();
//	*this = other;
}

Fixed::~Fixed() {
	std::cout << "Call Destructor" << std::endl;
}

Fixed&	Fixed::operator=(const Fixed &other) {
	std::cout << "Assignation operator called" << std::endl;
	this->_fixNumb = other.getRawBits();
	return (*this);
}

int		Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixNumb);
}

void	Fixed::setRawBits(const int raw) {
	this->_fixNumb = raw;
}