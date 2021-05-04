//
// Created by Retro Joella on 4/23/21.
//

#include "Bureaucrat.hpp"

int main() {
	
	try {
		Bureaucrat a("adsdf", 150);
		std::cout << a << std::endl;
		
		a.incrementBureaucrat();
		std::cout << a << std::endl;
		
		a.decrementBureaucrat();
		std::cout << a << std::endl;
		
		a.decrementBureaucrat();
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	
	try {
		Bureaucrat b("zxcv", 2);
		std::cout << b << std::endl;
		
		b.incrementBureaucrat();
		std::cout << b << std::endl;
		
		b.incrementBureaucrat();
		std::cout << b << std::endl;
		
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	
	return 0;
}

