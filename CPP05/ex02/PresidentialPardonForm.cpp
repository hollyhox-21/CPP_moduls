//
// Created by Retro Joella on 4/25/21.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) :	Form("PresidentialPardonForm", 25, 5){
	_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : Form("PresidentialPardonForm", 25, 5){
	_target = src._target;
}
PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &src) {
	_target = src._target;
	return *this;
}

void PresidentialPardonForm::action(const std::string &target) {
	std::cout << target << " has been pardoned by" << BRIGHT_CYAN <<  " Zafod Beeblebrox." << END << std::endl;
}
