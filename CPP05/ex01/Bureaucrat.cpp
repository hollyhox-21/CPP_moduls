//
// Created by Retro Joella on 4/23/21.
//

#include "Bureaucrat.hpp"


Bureaucrat::GradeTooHighException::GradeTooHighException(std::string str) : std::exception(), _except(str) {}
Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}
const char * Bureaucrat::GradeTooHighException::what() const throw() {return _except.c_str();}

Bureaucrat::GradeTooLowException::GradeTooLowException(std::string str) : std::exception(), _except(str) {}
Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}
const char * Bureaucrat::GradeTooLowException::what() const throw() {return _except.c_str();}


Bureaucrat::Bureaucrat(std::string const & name, int grade) : _name(name) {
	if (grade < 1)
		throw GradeTooHighException("Invalid construct grade! need >= 1");
	else if (grade > 150)
		throw GradeTooLowException("Invalid construct grade! need <= 150");
	else
		_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) {
	_name = src._name;
	if (_grade < 1)
		throw GradeTooHighException("Invalid construct grade! need >= 1");
	else if (_grade > 150)
		throw GradeTooLowException("Invalid construct grade! need <= 150");
	else
		_grade = src._grade;
}

Bureaucrat::~Bureaucrat() {

}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &src) {
	_name = src._name;
	_grade = src._grade;
	return (*this);
}

void Bureaucrat::signForm(const Form &form) const {
	if(form.getSignForm())
		std::cout << _name << " signs " << form.getName() << std::endl;
	else {
		std::cout << _name << " cannot sign " << form.getName() << " because he low grade" << std::endl;
		throw Form::GradeTooLowException("Low grade for sign");
	}
}

void Bureaucrat::incrementBureaucrat() {
	_grade--;
	if (_grade < 1)
		throw GradeTooHighException("Invalid grade! need >= 1");
}

void Bureaucrat::decrementBureaucrat() {
	_grade++;
	if (_grade > 150)
		throw GradeTooLowException("Invalid grade! need <= 150");
}


int Bureaucrat::getGrade() const {return _grade;}
const std::string & Bureaucrat::getName() const {return _name;}

std::ostream & operator<<(std::ostream & o, const Bureaucrat &obj) {
	o << BRIGHT_RED << obj.getName() << END << ", bureaucrat grade " << BRIGHT_CYAN << obj.getGrade() << END << std::endl;
	return o;
}
