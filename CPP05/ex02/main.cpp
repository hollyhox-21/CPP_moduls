//
// Created by Retro Joella on 4/25/21.
//

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

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
	return 0;
}