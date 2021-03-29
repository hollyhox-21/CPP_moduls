//
// Created by Retro Joella on 3/25/21.
//

#ifndef CPP00_CONTACT_CLASS_H
# define CPP00_CONTACT_CLASS_H
# include <iostream>
# include <string>

class Contact {

public:
	Contact(void);
	~Contact(void);
	
	void 		setId(int id);
	int			getId();
	void		setAttr(std::string attr, std::string value);
	std::string getAttr(std::string attr) const;

private:
	int			_id;
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_login;
	std::string	_postalAddress;
	std::string	_emailAddress;
	std::string	_phoneAddress;
	std::string	_birthdayDate;
	std::string	_favoriteMeal;
	std::string	_underwearColor;
	std::string	_darkestSecret;
};

#endif //CPP00_CONTACT_CLASS_H
