#include "Contact.class.h"
#include "Book.class.h"
#include <iomanip>

void 	promtAddAttr(std::string str, Contact *contact) {
	std::string	value;
	
	std::cout << "Enter " << str << std::endl;
	std::getline(std::cin, value);
	contact->setAttr(str, value);
}

void	addContact(Book& book, int id_contact) {
	Contact contact;
	
	contact.setId(id_contact + 1);
	promtAddAttr("first name", &contact);
	promtAddAttr("last name", &contact);
	promtAddAttr("nickname", &contact);
	promtAddAttr("login", &contact);
	promtAddAttr("postal address", &contact);
	promtAddAttr("email address", &contact);
	promtAddAttr("phone address", &contact);
	promtAddAttr("birthday date", &contact);
	promtAddAttr("favorite meal", &contact);
	promtAddAttr("underwear color", &contact);
	promtAddAttr("darkest secret", &contact);
	
	book.setContact(contact, id_contact);
}

void	printStr(std::string attr, Book *book, int id) {
	std::cout << "|" << std::setw(10);
	if (book->getContact(id).getAttr(attr).size() <= 10) {
		std::cout << book->getContact(id).getAttr(attr).substr(0, 10);
	}
	else {
		std::string str = book->getContact(id).getAttr(attr).substr(0, 10);
		str[9] = '.';
		std::cout << str;
	}
}

void	printTabl(Book *book) {
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "|   INDEX  |FIRST_NAME| LAST_NAME| NICKNAME |" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	for (int i = 0; i < 8 && book->getContact(i).getId() != 0; i++) {
		std::cout << "|" << std::setw(10) << book->getContact(i).getId();
		printStr("first name", book, i);
		printStr("last name", book, i);
		printStr("nickname", book, i);
		std::cout << "|" << std::endl;
	}
	std::cout << "+----------+----------+----------+----------+" << std::endl;
}

void 	search(Book *book) {
	std::string	id;
	int			id_num;
	
	if (book->getCountContact() == 0) {
		std::cerr << "Book is empty!!!" << std::endl;
		return;
	}
	
	printTabl(book);
	std::cout << "Enter ID contact \"1-" << book->getCountContact() << "\"" << std::endl;
	std::getline(std::cin, id);
	try {
		id_num = std::stoi(id);
		if (id_num < 1 || id_num > book->getCountContact() + 1) {
			throw std::exception();
		}
		else {
			book->printContact(id_num - 1);
		}
	}
	catch (std::exception &e) {
		std::cerr << "Invalid id" << std::endl;
	}
	
}

int 	main() {
	
	int			i = 0;
	Book		book;
	std::string	cmd;
	
	while (std::cin) {
		std::cout << "\033[34m" << "Enter the command" << "\033[39m" << std::endl;
		std::getline(std::cin, cmd);
		if (cmd.compare("EXIT") == 0) {
			std::cout << "Bye, bye!!!..." << std::endl;
			break;
		}
		else if (cmd.compare("SEARCH") == 0) {
			search(&book);
		}
		else if (cmd.compare("ADD") == 0) {
			if (i > 7) {
				std::cout << "Book is full!!!" << std::endl;
			}
			else {
				addContact(book, i);
				i++;
				book.setCountContact(i);
			}
		}
		else {
			std::cerr << "Invalid command. Try \"ADD\", \"SEARCH\", \"EXIT\" " << std::endl;
		}
	}
	return (0);
}

