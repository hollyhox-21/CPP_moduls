//
// Created by Retro Joella on 4/25/21.
//

#ifndef CPP05_PRESIDENTIALPARDONFORM_HPP
#define CPP05_PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"

class PresidentialPardonForm : public Form {
private:
	PresidentialPardonForm();
	
public:
	PresidentialPardonForm(std::string const & target);
	PresidentialPardonForm(PresidentialPardonForm const & src);
	~PresidentialPardonForm();
	
	PresidentialPardonForm &	operator=(PresidentialPardonForm const & src);
	
	void action(const std::string &target);
};

#endif //CPP05_PRESIDENTIALPARDONFORM_HPP
