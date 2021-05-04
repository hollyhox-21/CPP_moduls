//
// Created by Retro Joella on 3/25/21.
//

#include "Contact.class.h"

Contact::Contact() {
	this->_id = 0;
	return;
}

Contact::~Contact() {
	return;
}

void		Contact::setId(int id) {
	this->_id = id;
}

int 		Contact::getId() {
	return (this->_id);
}

void		Contact::setAttr(std::string attr, std::string value) {
	if (attr == "first name")
		this->_firstName = value;
	if (attr == "last name")
		this->_lastName = value;
	if (attr == "nickname")
		this->_nickname = value;
	if (attr == "login")
		this->_login = value;
	if (attr == "postal address")
		this->_postalAddress = value;
	if (attr == "email address")
		this->_emailAddress = value;
	if (attr == "phone address")
		this->_phoneAddress = value;
	if (attr == "birthday date")
		this->_birthdayDate = value;
	if (attr == "favorite meal")
		this->_favoriteMeal = value;
	if (attr == "underwear color")
		this->_underwearColor = value;
	if (attr == "darkest secret")
		this->_darkestSecret = value;
}

std::string Contact::getAttr(std::string attr) const {
	if (attr == "first name")
		return (this->_firstName);
	else if (attr == "last name")
		return (this->_lastName);
	else if (attr == "nickname")
		return (this->_nickname);
	else if (attr == "login")
		return (this->_login);
	else if (attr == "postal address")
		return (this->_postalAddress);
	else if (attr == "email address")
		return (this->_emailAddress);
	else if (attr == "phone address")
		return (this->_phoneAddress);
	else if (attr == "birthday date")
		return (this->_birthdayDate);
	else if (attr == "favorite meal")
		return (this->_favoriteMeal);
	else if (attr == "underwear color")
		return (this->_underwearColor);
	else if (attr == "darkest secret")
		return (this->_darkestSecret);
	return (NULL);
}


