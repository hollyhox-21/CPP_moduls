//
// Created by Retro Joella on 4/5/21.
//

#include <string>
#include <iostream>
#include "Fixed.class.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->_fixNumb = 0;
}

Fixed::Fixed(float numb) : _fixNumb((int)roundf(numb * (1 << _mantis))) {
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(int numb) : _fixNumb(numb * (1 << _mantis)) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed&			Fixed::operator=(const Fixed &other) {
	std::cout << "Assignation operator called" << std::endl;
	this->_fixNumb = other.toFloat() * (1 << _mantis);
	return (*this);
}

int				Fixed::toInt() const {
	return (this->_fixNumb / (1 << _mantis));
}

float			Fixed::toFloat() const {
	return ((float)this->_fixNumb / (1 << _mantis));
}
std::ostream &	operator<<(std::ostream & o, Fixed const & numb) {
	o << numb.toFloat();
	return o;
}