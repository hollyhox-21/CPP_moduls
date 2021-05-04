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
protected:
	Form();
	std::string const		_name;
	bool					_signForm;
	int	const				_gradeSign;
	int	const				_gradeExecute;
	std::string 			_target;
public:
	Form(std::string const & name, int const & gradeSign, int const & gradeExecute);
	Form(Form const & src);
	~Form();
	
	Form &	operator=(Form const & src);
	
	class GradeTooHighException : public std::exception {
	private:
		std::string _except;
	public:
		GradeTooHighException(std::string str);
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
	virtual	void					execute(Bureaucrat const & executor);
	virtual	void					action(std::string const & target) = 0;
	virtual void					beSigned(Bureaucrat const & bure);
	virtual std::string const &		getName() const;
	virtual int const &				getGradeSign() const;
	virtual int const &				getGradeExecute() const;
	virtual bool const &			getSignForm() const;
};

std::ostream & operator<<(std::ostream & o, const Form &obj);
#endif //CPP05_FORM_HPP
