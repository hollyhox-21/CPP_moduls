//
// Created by Retro Joella on 4/24/21.
//

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	try {
		Bureaucrat	Bob("Bob", 2);
		Form		b("Form n.4", 3, 3);
		std::cout << Bob << b << std::endl;
		try {
			b.beSigned(Bob);
			b.beSigned(Bob);
		}
		catch  (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
		
//		try {
//			Bob.decrementBureaucrat();
//			Bob.decrementBureaucrat();
//			Form	d("Form n.6", 3, 3);
//			std::cout << Bob << d << std::endl;
//			d.beSigned(Bob);
//		}
//		catch  (std::exception & e) {
//			std::cerr << e.what() << std::endl;
//		}
//		try {
//			Form	c("Form n.6", -1, 11);
//		}
//		catch  (std::exception & e) {
//			std::cerr << e.what() << std::endl;
//		}
//		try {
//			Form	c("Form n.6", 1, 155);
//		}
//		catch  (std::exception & e) {
//			std::cerr << e.what() << std::endl;
//		}
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}

