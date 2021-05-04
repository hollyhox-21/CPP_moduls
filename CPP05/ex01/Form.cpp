//
// Created by Retro Joella on 4/24/21.
//

#include "Form.hpp"

Form::GradeTooHighException::GradeTooHighException(std::string str) : std::exception(), _except(str) {}
Form::GradeTooHighException::~GradeTooHighException() throw() {}
const char * Form::GradeTooHighException::what() const throw() {return _except.c_str();}

Form::GradeTooLowException::GradeTooLowException(std::string str) : std::exception(), _except(str) {}
Form::GradeTooLowException::~GradeTooLowException() throw() {}
const char * Form::GradeTooLowException::what() const throw() {return _except.c_str();}


Form::Form(const std::string &name, const int &gradeSign, const int &gradeExecute) :	_name(name), _signForm(false), _gradeSign(gradeSign),
																						_gradeExecute(gradeExecute){
	if (gradeSign < 1)
		throw GradeTooHighException("Invalid construct gradeSign! need >= 1");
	else if (gradeSign > 150)
		throw GradeTooLowException("Invalid construct gradeSign! need <= 150");
	
	if (gradeExecute < 1)
		throw GradeTooHighException("Invalid construct gradeExecute! need >= 1");
	else if (gradeExecute > 150)
		throw GradeTooLowException("Invalid construct gradeExecute! need <= 150");
}

Form::Form(const Form &src) :	_name(src._name), _signForm(src._signForm),
								_gradeSign(src._gradeSign), _gradeExecute(src._gradeExecute){
	if (_gradeSign < 1)
		throw GradeTooHighException("Invalid construct gradeSign! need >= 1");
	else if (_gradeSign > 150)
		throw GradeTooLowException("Invalid construct gradeSign! need <= 150");
	
	if (_gradeExecute < 1)
		throw GradeTooHighException("Invalid construct gradeExecute! need >= 1");
	else if (_gradeExecute > 150)
		throw GradeTooLowException("Invalid construct gradeExecute! need <= 150");
}

Form::~Form() {

}

Form & Form::operator=(const Form &src) {
	_signForm = src._signForm;
	
	return (*this);
}

void Form::beSigned(const Bureaucrat &bure) {
	if (bure.getGrade() <= _gradeSign) {
		if (_signForm)
			throw GradeTooLowException("Form is SIGNED!!");
		_signForm = true;
		bure.signForm(*this);
	}
	else
		bure.signForm(*this);
}

std::string const &Form::getName() const {return _name;}
int const &Form::getGradeSign() const {return _gradeSign;}
int const &Form::getGradeExecute() const {return _gradeExecute;}
bool const &Form::getSignForm() const {return _signForm;}

std::ostream & operator<<(std::ostream & o, const Form &obj) {
	o << BRIGHT_RED << obj.getName() << END << " - name form\n" << obj.getSignForm() << " - sign\n"
	<< obj.getGradeSign() << " - grade for sign\n" << obj.getGradeExecute() << " - grade for execute" << std::endl;
	return o;
}