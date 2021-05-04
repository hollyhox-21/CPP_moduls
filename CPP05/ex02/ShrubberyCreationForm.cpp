//
// Created by Retro Joella on 4/25/21.
//

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("ShrubberyCreationForm", 145, 137) {
	_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : Form("ShrubberyCreationForm", 145, 137) {
	_target = src._target;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src) {
	_target = src._target;
	return *this;
}

void ShrubberyCreationForm::action(const std::string &target) {
	std::ofstream	file(target);
	
	if (file.is_open()) {
		file << "__________________________¶\n"
				"______________________¶¶¶¶¶¶¶¶\n"
				"______________________¶¶¶¶¶¶¶¶¶¶\n"
				"______________________¶¶¶¶¶¶¶¶¶¶¶¶\n"
				"____________________¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶\n"
				"__________________¶¶¶_¶¶¶_¶¶¶¶¶¶¶¶¶¶¶\n"
				"________________¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶_¶_¶¶¶¶\n"
				"_______________¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶\n"
				"________________¶¶_¶¶¶¶¶¶¶¶¶¶_¶_____¶\n"
				"_____________________¶__¶___¶¶____¶_¶¶\n"
				"____________________¶_¶___¶¶¶___¶¶¶¶¶¶¶¶¶¶¶\n"
				"___________________¶¶¶¶___¶¶¶___¶¶¶_¶¶¶¶¶¶\n"
				"_______________¶_¶¶¶¶¶¶___¶¶____¶¶¶¶¶¶_¶¶¶¶¶\n"
				"_________¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶______¶¶¶¶¶¶¶¶¶¶¶¶¶\n"
				"_________¶¶¶¶¶¶¶¶¶¶¶¶_¶¶_¶¶_____¶¶¶¶¶¶¶¶¶¶¶¶¶¶\n"
				"_______¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶_____¶¶¶¶¶¶¶¶¶¶__¶¶\n"
				"_______¶_¶¶¶¶¶¶¶¶¶¶¶¶¶¶_¶¶¶___¶¶¶____¶¶¶¶¶¶¶¶¶¶¶¶\n"
				"_____¶_¶¶¶¶¶¶¶¶¶¶¶¶_¶¶¶_¶¶____¶¶___________¶¶¶¶¶¶¶\n"
				"_____¶¶¶¶¶¶¶¶¶_¶¶¶¶¶¶¶¶_¶____¶¶_¶__________¶¶¶¶¶¶\n"
				"_____¶¶__¶¶¶¶¶_¶¶¶¶¶¶¶¶_¶¶__¶¶¶¶¶¶¶¶¶______¶¶¶__¶¶\n"
				"__________________¶_¶¶¶_¶¶_¶¶_¶¶¶_¶¶¶______¶\n"
				"___________________¶¶¶¶_¶¶¶¶¶_¶¶¶_¶_¶_¶\n"
				"_________________¶¶___¶¶¶¶¶¶___¶¶¶¶¶¶¶¶¶¶\n"
				"_______________¶¶¶¶¶____¶¶¶¶¶___¶¶¶¶¶¶¶¶¶¶\n"
				"___________¶¶¶¶¶¶¶¶¶_____¶¶¶¶¶_¶¶¶¶¶¶¶¶¶¶¶¶¶_¶\n"
				"___________¶_¶¶¶¶¶¶¶______¶¶¶¶¶¶¶_¶¶¶¶¶¶¶¶¶¶¶¶\n"
				"_________¶¶¶¶¶¶¶¶¶¶¶¶¶¶_¶_¶¶¶¶_¶¶¶___¶¶¶¶¶¶¶_¶¶¶\n"
				"______¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶_¶¶¶¶¶_¶¶¶_¶__¶¶_¶¶¶¶¶\n"
				"___¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶_¶¶¶¶____¶_________¶¶\n"
				"___¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶____¶\n"
				"_¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶\n"
				"_¶¶¶¶¶_¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶_¶¶¶\n"
				"_¶¶_¶¶¶¶¶¶¶¶¶¶¶_¶¶¶_¶¶¶¶¶¶__¶¶¶\n"
				"¶¶¶¶¶¶¶¶¶¶¶_¶¶¶¶¶¶¶¶¶¶__¶_¶¶¶¶¶¶¶\n"
				"_¶¶¶¶¶_¶¶¶__________________¶¶¶¶¶\n"
				"____¶¶____________________¶¶¶_¶¶¶\n"
				"_________________________¶¶¶¶¶¶¶¶\n"
				"________________________¶_¶_¶¶¶¶_¶\n"
				"_______________________¶¶¶¶¶__¶¶¶_¶\n"
				"__________________¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶\n"
				"_____¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶\n"
				"_____¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶\n"
				"_____¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶" << std::endl;
	}
	else if (!file.is_open()) {
		throw GradeTooLowException("Uh oh, SomeText.txt could not be opened for writing!");
	}
	
	file.close();
}