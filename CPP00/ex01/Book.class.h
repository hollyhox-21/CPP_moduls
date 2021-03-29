//
// Created by Retro Joella on 3/29/21.
//

#ifndef CPP00_BOOK_CLASS_H
# define CPP00_BOOK_CLASS_H
# include <string>
# include <iostream>
# include "Contact.class.h"

class Book {
public:
	
	Book();
	~Book();
	
	void 	printContact(int id) const;
	void 	setContact(Contact contact, int id);
	Contact	getContact(int id) const;
	void	setCountContact(int value);
	int 	getCountContact() const ;
	
private:
	Contact _contactBook[8];
	int		_countContact;
};



#endif //CPP00_BOOK_CLASS_H
