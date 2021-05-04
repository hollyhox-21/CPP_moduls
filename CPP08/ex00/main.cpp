//
//
// Created by Retro Joella on 4/30/21.

#include <iostream>
#include <list>
#include "easyfind.hpp"
#include "vector"

int main() {
	std::list<int>	test;

	for (int i = 0; i < 5; ++i) {
		test.push_back(i);
	}
	std::list<int>::iterator it = test.begin();
	std::list<int>::iterator ite = test.end();
	while (it != ite) {
		std::cout << *it << " ";
		++it;
	}

	std::cout << std::endl;

	try {
		std::list<int>::iterator nb_1 = easyfind(test, 1);
		std::cout << "Find argument ---> " << *nb_1 << std::endl;
		std::list<int>::iterator nb_2 = easyfind(test, 10);
		std::cout << "Find argument ---> " << *nb_2 << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	
	std::vector<int> test_2(5);
	
	for (int i = 0; i < 5; ++i) {
		test_2[i] = i;
	}
	for (int i = 0; i < 5; ++i) {
		std::cout << test_2[i] << " ";
	}
	
	std::cout << std::endl;
	
	try {
		std::vector<int>::iterator nb_1 = easyfind(test_2, 4);
		std::cout << "Find argument ---> " << *nb_1 << std::endl;
		std::vector<int>::iterator nb_2 = easyfind(test_2, 10);
		std::cout << "Find argument ---> " << *nb_2 << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	
	return 0;
}