//
// Created by Retro Joella on 4/27/21.
//

#include <iostream>
#include <string>
#include <iomanip>

bool ft_checkBuf(std::string &buf) {
	if (buf != "nan" && buf != "+inf" && buf != "-inf")
		return (true);
	else
		return (false);
}

void	ft_char(std::string &buf) {
	int res = 0;
	
	if (ft_checkBuf(buf))
		res = std::stoi(buf);
	
	std::cout << "char: ";
	
	if (res < 32 || res > 126) {
		if (buf == "nan" || buf == "+inf" || buf == "-inf")
			std::cout << "impossible" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	else {
		 std::cout << "\'" << static_cast<char>(res) << "\'" << std::endl;
	}
}

void	ft_int(std::string &buf) {
	int res = 0;
	
	if (ft_checkBuf(buf))
		res = std::stoi(buf);
	
	std::cout << "int: ";
	if (buf == "nan" || buf == "+inf" || buf == "-inf")
		std::cout << "impossible" << std::endl;
	else
		std::cout << "\'" << static_cast<int>(res) << "\'" << std::endl;
}

void	ft_float(std::string &buf) {
	float res = 0;
	
	res = std::stof(buf);
	
	std::cout << "float: ";
	std::cout << std::fixed << std::setprecision(1) << "\'" << static_cast<float>(res) << "f\'" << std::endl;
}

void	ft_double(std::string &buf) {
	double res = 0;
	
	res = std::stod(buf);

	std::cout << "double: ";
	std::cout << std::fixed << std::setprecision(1) << "\'" << static_cast<double>(res) << "\'" << std::endl;
}

void ft_convert(std::string & buf) {
	ft_char(buf);
	ft_int(buf);
	ft_float(buf);
	ft_double(buf);
}

int main (int ac, char **av) {
	if (ac == 2) {
		std::string	buf = av[1];
		try {
			ft_convert(buf);
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	else
		std::cout << "Too many arguments" << std::endl;
	return 0;
}
