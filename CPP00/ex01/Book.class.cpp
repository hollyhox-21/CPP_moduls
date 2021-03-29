//
// Created by Retro Joella on 3/29/21.
//

#include "Book.class.h"

Book::Book () {
	this->_countContact = 0;
	return;
}

Book::~Book() {
	return;
}

void Book::setContact(Contact contact, int id) {
	this->_contactBook[id] = contact;
}

void Book::printContact(int id) const {
	std::cout << "First name: " << _contactBook[id].getAttr("first name") << std::endl;
	std::cout << "Last name: " << _contactBook[id].getAttr("last name") << std::endl;
	std::cout << "Nickname: " << _contactBook[id].getAttr("nickname") << std::endl;
	std::cout << "Login: " << _contactBook[id].getAttr("login") << std::endl;
	std::cout << "Postal address: " << _contactBook[id].getAttr("postal address") << std::endl;
	std::cout << "Email address: " << _contactBook[id].getAttr("email address") << std::endl;
	std::cout << "Phone address: " << _contactBook[id].getAttr("phone address") << std::endl;
	std::cout << "Birthday date: " << _contactBook[id].getAttr("birthday date") << std::endl;
	std::cout << "Favorite meal: " << _contactBook[id].getAttr("favorite meal") << std::endl;
	std::cout << "Underwear color: " << _contactBook[id].getAttr("underwear color") << std::endl;
	std::cout << "Darkest secret: " << _contactBook[id].getAttr("darkest secret") << std::endl;
}

Contact	Book::getContact(int id) const{
	return (this->_contactBook[id]);
}

void	Book::setCountContact(int value) {
	this->_countContact = value;
}

int		Book::getCountContact() const {
	return (this->_countContact);
}

