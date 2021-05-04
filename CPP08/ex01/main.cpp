//
// Created by Retro Joella on 4/30/21.
//

#include <iostream>
#include "span.hpp"
#include <vector>
#include <list>

int main()
{
	srand(time(0));
	try {
		Span sp = Span(5);
		sp.addNumber(3);
		sp.addNumber(5);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	try {
		Span sp = Span(0);
		sp.addNumber(3);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	try {
		Span sp = Span(1);
		sp.addNumber(3);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	try {
		Span sp = Span(-1);
		sp.addNumber(3);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::vector<int> test;

		for (int i = 0; i < 1000; ++i) {
			test.push_back(i);
		}
		Span sp = Span(test.size());
		
		sp.addNumber<std::vector<int> > (test.begin(), test.end());

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::list<int> test;
		
		for (int i = 0; i < 10; ++i) {
			test.push_back(rand() % 10);
		}
		std::list<int>::iterator it = test.begin();
		for (unsigned long i = 0; i < test.size(); ++i) {
			std::cout << *it << " ";
			it++;
		}
		std::cout << std::endl;
		Span sp = Span(test.size());
		
		sp.addNumber<std::list<int> > (test.begin(), test.end());
		
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
