#include <iostream>
#include "Sample.class.h"

Sample::Sample(char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3) {
	
	
	std::cout << "Construct class" << std::endl;
	std::cout << "Variable a1 = " << this->a1 << std::endl;
	std::cout << "Variable a2 = " << this->a2 << std::endl;
	std::cout << "Variable a3 = " << this->a3 << std::endl;
	return;
}

Sample::~Sample() {
	
	std::cout << "Destruct class" << std::endl;
	return;
}

void Sample::bar() {

	std::cout << "Function bar is call" << std::endl;
	return;
}

