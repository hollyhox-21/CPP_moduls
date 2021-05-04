//
// Created by Retro Joella on 4/29/21.
//

#include <string>
#include <iostream>
#include "iter.hpp"
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

int main (){
	std::cout << "MASS: INTEGER" << std::endl;
	
	int mass_1[4] = {1, 2, 3, 4};
	
	std::cout << BRIGHT_RED << "old mass" << END << std::endl;
	for (int i = 0; i < 4; ++i) {
		std::cout << mass_1[i] << " ";
	}
	
	std::cout << BRIGHT_GREEN << "\nnew mass" << END << std::endl;
	iter(mass_1, 4, myfunk);
	
	std::cout << "\n\nMASS: DOUBLE" << std::endl;
	
	double mass_2[4] = {32.24, 33.234, 34.23, 42.12};
	std::cout << BRIGHT_RED << "old mass" << END << std::endl;
	for (int i = 0; i < 4; ++i) {
		std::cout << mass_2[i] << " ";
	}
	std::cout << BRIGHT_GREEN << "\nnew mass" << END << std::endl;
	iter(mass_2, 4, myfunk);
	
	std::cout << "\n\nMASS: STRING" << std::endl;

	std::string mass_3[4] = {"hello", "world", "ecole", "42"};
	
	std::cout << BRIGHT_RED << "old mass" << END << std::endl;
	for (int i = 0; i < 4; ++i) {
		std::cout << mass_3[i] << " ";
	}
	std::cout << BRIGHT_GREEN << "\nnew mass" << END << std::endl;
	
	iter(mass_3, 4, myfunk);
	
	return 0;
}