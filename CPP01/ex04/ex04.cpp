//
// Created by Retro Joella on 3/31/21.
//

#include <iostream>
#include <string>

void	printPointer(std::string *strP) {
	std::cout << "Pointer---> "<< *strP << std::endl;
}

void	printReference(std::string &strR) {
	std::cout << "Reference---> " << strR << std::endl;
}

int	main() {
	std::string str = "HI THIS IS BRAIN";
	
	std::string *strP = &str;
	std::string &strR = str;
	
	printPointer(strP);
	printReference(strR);
	
	return (0);
}
