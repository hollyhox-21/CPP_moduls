//
// Created by Retro Joella on 4/24/21.
//

#ifndef CPP05_FORM_HPP
#define CPP05_FORM_HPP
class Form;
#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Form {
private:
	Form();
	std::string const			_name;
	bool				_signForm;
	int	const				_gradeSign;
	int	const				_gradeExecute;
public:
	Form(std::string const & name, int const & gradeSign, int const & gradeExecute);
	Form(Form const & src);
	~Form();
	
	Form &	operator=(Form const & src);
	
	class GradeTooHighException : public std::exception {
	private:
		std::string _except;
	public:
		explicit GradeTooHighException(std::string str);
		~GradeTooHighException() throw();
		
		const char * what() const throw();
	};
	
	class GradeTooLowException : public std::exception  {
	private:
		std::string	_except;
	public:
		GradeTooLowException(std::string str);
		~GradeTooLowException() throw();
		
		const char * what() const throw();
	};
	
	void					beSigned(Bureaucrat const & bure);
	std::string const &		getName() const;
	int const &				getGradeSign() const;
	int const &				getGradeExecute() const;
	bool const &			getSignForm() const;
};

std::ostream & operator<<(std::ostream & o, const Form &obj);
#endif //CPP05_FORM_HPP
