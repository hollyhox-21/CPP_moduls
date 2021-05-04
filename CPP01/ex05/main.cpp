//
// Created by Retro Joella on 3/31/21.
//

#include <iostream>
#include "Human.hpp"

int	main() {
	Human bob;
	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
	return (0);
}