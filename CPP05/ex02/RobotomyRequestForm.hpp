//
// Created by Retro Joella on 4/25/21.
//

#ifndef CPP05_ROBOTOMYREQUESTFORM_HPP
#define CPP05_ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"

class RobotomyRequestForm : public Form {
private:
	RobotomyRequestForm();
public:
	RobotomyRequestForm(std::string const & target);
	RobotomyRequestForm(RobotomyRequestForm const & src);
	~RobotomyRequestForm();
	
	RobotomyRequestForm &	operator=(RobotomyRequestForm const & src);
	
	void action(const std::string &target);
};

#endif //CPP05_ROBOTOMYREQUESTFORM_HPP
