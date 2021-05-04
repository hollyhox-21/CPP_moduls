//
// Created by Retro Joella on 4/26/21.
//

#ifndef CPP05_INTERN_HPP
#define CPP05_INTERN_HPP
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
private:
	std::string	_typs[3];
	Form *(Intern::*_ptrOnForm[3])(std::string &);
public:
	Intern();
	Intern(Intern const & src);
	~Intern();

	Intern &	operator=(Intern const & src);
	
	class notFormExcept : public std::exception {
	private:
		std::string _except;
	public:
		notFormExcept(std::string str);
		~notFormExcept() throw();
		
		const char * what() const throw();
	};
	
	
	Form *	makeForm(std::string typeForm, std::string target);
	Form *	createPresidentialPardonForm(std::string &target);
	Form *	createRobotomyRequestForm(std::string &target);
	Form *	createShrubberyCreationForm(std::string &target);
};

#endif //CPP05_INTERN_HPP
