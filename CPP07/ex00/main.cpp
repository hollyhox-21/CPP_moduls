//
// Created by Retro Joella on 4/29/21.
//

#include <string>
#include <iostream>
#include "whatever.hpp"

int main() {
	
	int a = 2;
	int b = 3;

	my::ft_swap(a, b);
	std::cout << "SWAP: " <<  a << "---" << b << std::endl;
	std::cout << "MIN: " << my::ft_min(a, b) << std::endl;
	std::cout << "MAX: " << my::ft_max(a, b) << std::endl << std::endl;

	double c = 2.23;
	double d = 3.434;
	
	my::ft_swap(c, d);
	std::cout << "SWAP: " << c << "---" << d << std::endl;
	std::cout << "MIN: " << my::ft_min(c, d) << std::endl;
	std::cout << "MAX: " << my::ft_max(c, d) << std::endl << std::endl;

	char e = 'z';
	char f = 'x';
	
	my::ft_swap(e, f);
	std::cout << "SWAP: " << e << "---" << f << std::endl;
	std::cout << "MIN: " << my::ft_min(e, f) << std::endl;
	std::cout << "MAX: " << my::ft_max(e, f) << std::endl << std::endl;

	std::string g = "Hello";
	std::string h = "World";
	
	my::ft_swap(g, h);
	std::cout << "SWAP: " << g << "---" << h << std::endl;
	std::cout << "MIN: " << my::ft_min(g, h) << std::endl;
	std::cout << "MAX: " << my::ft_max(g, h) << std::endl;
	
	
//	int a = 2;
//	int b = 3;
//	my::ft_swap( a, b );
//	std::cout << "a = " << a << ", b = " << b << std::endl;
//	std::cout << "min( a, b ) = " << my::ft_min( a, b ) << std::endl;
//	std::cout << "max( a, b ) = " << my::ft_max( a, b ) << std::endl;
//	std::string c = "chaine1";
//	std::string d = "chaine2";
//	my::ft_swap(c, d);
//	std::cout << "c = " << c << ", d = " << d << std::endl;
//	std::cout << "min( c, d ) = " << my::ft_min( c, d ) << std::endl;
//	std::cout << "max( c, d ) = " << my::ft_max( c, d ) << std::endl;
	
	return 0;
}
