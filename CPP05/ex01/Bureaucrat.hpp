//
// Created by Retro Joella on 4/23/21.
//

#ifndef CPP05_BUREAUCRAT_HPP
#define CPP05_BUREAUCRAT_HPP
class Bureaucrat;
#include <string>
#include <iostream>
#include "Form.hpp"
#define BLACK ("\x1B[30m")
#define RED ("\x1B[31m")
#define GREEN ("\x1B[32m")
#define YELLOW ("\x1B[33m")
#define BLUE ("\x1B[34m")
#define MAGENTA ("\x1B[35m")
#define CYAN  ("\x1B[36m")
#define WHITE ("\x1B[37m")
#define BRIGHT_BLACK ("\x1B[90m")
#define BRIGHT_RED ("\x1B[91m")
#define BRIGHT_GREEN ("\x1B[92m")
#define BRIGHT_YELLOW ("\x1B[93m")
#define BRIGHT_BLUE ("\x1B[94m")
#define BRIGHT_MAGENTA ("\x1B[95m")
#define BRIGHT_CYAN  ("\x1B[96m")
#define BRIGHT_WHITE ("\x1B[97m")
#define BG_BLUE ("\x1B[104m")
#define END ("\033[0m")


class Bureaucrat {
private:
	Bureaucrat();
	std::string	_name;
	int			_grade;
public:
	Bureaucrat(std::string const & name, int grade);
	Bureaucrat(const Bureaucrat &src);
	~Bureaucrat();
	
	Bureaucrat &	operator=(const Bureaucrat &src);
	
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
	
	void				signForm(Form const & form) const;
	void				incrementBureaucrat();
	void				decrementBureaucrat();
	const std::string &	getName() const;
	int					getGrade() const;
	
};

std::ostream & operator<<(std::ostream & o, const Bureaucrat &obj);
#endif //CPP05_BUREAUCRAT_HPP
