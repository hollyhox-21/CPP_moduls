//
// Created by Retro Joella on 4/25/21.
//

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main () {
	srand(time(0));
	
	try {
		Bureaucrat				Bob("Bob", 20);
		RobotomyRequestForm		first("Asdf");

		first.beSigned(Bob);
		Bob.executeForm(first);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		Bureaucrat				Tim("Tim", 20);
		ShrubberyCreationForm	second("Home");

		second.beSigned(Tim);
		Tim.executeForm(second);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		Bureaucrat				Tim("Tim", 20);
		ShrubberyCreationForm	second("");

		second.beSigned(Tim);
		Tim.executeForm(second);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		Bureaucrat				Bob("Bob", 70);
		RobotomyRequestForm		first("Asdf");

		first.beSigned(Bob);
		Bob.executeForm(first);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		Bureaucrat				Bob("Bob", 70);
		RobotomyRequestForm		first("Asdf");

//		first.beSigned(Bob);
		Bob.executeForm(first);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		Bureaucrat				Bob("Bob", 3);
		PresidentialPardonForm	first("Greg");

		first.beSigned(Bob);
		Bob.executeForm(first);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	
	try {
		Bureaucrat				Bob("Bob", 3);
		Intern					Dir;
		Form *					test;
		test = Dir.makeForm( "robotomy request", "Bander");
		
		test->beSigned(Bob);
		
		Bob.executeForm(*test);
		
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	
	try {
		Bureaucrat				Bob("Bob", 3);
		Intern					Dir;
		Form *					test;
		test = Dir.makeForm("presidential pardon", "Bander");
		
		test->beSigned(Bob);
		
		Bob.executeForm(*test);
		
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	
	try {
		Bureaucrat				Bob("Bob", 3);
		Intern					Dir;
		Form *					test;
		test = Dir.makeForm( "", "Bander");
		
		test->beSigned(Bob);
		
		Bob.executeForm(*test);
		
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	
	try {
		Bureaucrat				Bob("Bob", 139);
		Intern					Dir;
		Form *					test;
		test = Dir.makeForm( "presidential pardon", "Bander");
		
		test->beSigned(Bob);
		
		Bob.executeForm(*test);
		
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	
	return 0;
}