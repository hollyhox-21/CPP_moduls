//
// Created by Retro Joella on 4/26/21.
//

#include "Intern.hpp"

Intern::notFormExcept::notFormExcept(std::string str) : std::exception(), _except(str){}
Intern::notFormExcept::~notFormExcept() throw() {}
const char * Intern::notFormExcept::what() const throw() {return _except.c_str();}

Intern::Intern() {
	_typs[0] = "presidential pardon" ;
	_typs[1] = "robotomy request";
	_typs[2] = "shrubbery creation";
	
	_ptrOnForm[0] = &Intern::createPresidentialPardonForm;
	_ptrOnForm[1] = &Intern::createRobotomyRequestForm;
	_ptrOnForm[2] = &Intern::createShrubberyCreationForm;
}

Intern::Intern(const Intern &src) {
	_typs[0] = src._typs[0];
	_typs[1] = src._typs[1];
	_typs[2] = src._typs[2];
	
	_ptrOnForm[0] = src._ptrOnForm[0];
	_ptrOnForm[1] = src._ptrOnForm[1];
	_ptrOnForm[2] = src._ptrOnForm[2];
}

Intern::~Intern() {}

Intern & Intern::operator=(const Intern &src) {
	_typs[0] = src._typs[0];
	_typs[1] = src._typs[1];
	_typs[2] = src._typs[2];
	
	_ptrOnForm[0] = src._ptrOnForm[0];
	_ptrOnForm[1] = src._ptrOnForm[1];
	_ptrOnForm[2] = src._ptrOnForm[2];
	
	return (*this);
}

Form * Intern::makeForm(std::string typeForm, std::string target) {
	for (int i = 0; i < 3; ++i) {
		if (_typs[i] == typeForm)
			return ((this->*_ptrOnForm[i])(target));
	}
	throw notFormExcept("Not find form :(");
}

Form * Intern::createPresidentialPardonForm(std::string &target) {
	PresidentialPardonForm *src = new PresidentialPardonForm(target);
	return (src);
}

Form * Intern::createRobotomyRequestForm(std::string &target) {
	RobotomyRequestForm *src = new RobotomyRequestForm(target);
	return (src);
}

Form * Intern::createShrubberyCreationForm(std::string &target) {
	ShrubberyCreationForm *src = new ShrubberyCreationForm(target);
	return (src);
}
