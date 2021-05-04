//
// Created by Retro Joella on 4/25/21.
//

#ifndef CPP05_SHRUBBERYCREATIONFORM_HPP
#define CPP05_SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"

class ShrubberyCreationForm : public Form {
private:
	ShrubberyCreationForm();
public:
	ShrubberyCreationForm(std::string const & target);
	ShrubberyCreationForm(const ShrubberyCreationForm & src);
	~ShrubberyCreationForm();
	
	ShrubberyCreationForm &	operator=(const ShrubberyCreationForm & src);
	
	void action(const std::string &target);
	
};
#endif //CPP05_SHRUBBERYCREATIONFORM_HPP
