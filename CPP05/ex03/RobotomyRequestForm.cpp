//
// Created by Retro Joella on 4/25/21.
//

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) :	Form("RobotomyRequestForm", 72, 45){
	_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : Form("RobotomyRequestForm", 72, 45){
	_target = src._target;
}
RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &src) {
	_target = src._target;
	return *this;
}

void RobotomyRequestForm::action(const std::string &target) {
	std::string a[2] = {"\x1B[92mIt\'s OK\033[0m", "\x1B[91mIt\'s NOT OK!!!!\033[0m"};
	std::cout << "BRRRRRRRRR..... " << target << " has been robotomized." << a[rand() % 2] << std::endl;
	
}

//std::string const &  RobotomyRequestForm::getTarget() const {return _target;}

