//
// Created by Retro Joella on 4/1/21.
//

#include <string>
#include <iostream>
#include <fstream>

int	main(int ac, char **av) {
	if (ac == 4) {
		std::string				buf;
		std::string::size_type	it;
		std::string				s1 = av[2];
		std::string				s2 = av[3];
		std::string				file = av[1];
		std::ifstream			ifs(file);
		if (ifs.is_open()) {
			std::ofstream			ofs(file + ".replace");
			if (ofs.is_open()) {
				while (std::getline(ifs, buf)) {
					while ((it = buf.find(s1)) != std::string::npos) {
						buf.replace(it, s1.size(), s2);
					}
					ofs << buf << std::endl;
				}
				ifs.close();
				ofs.close();
			}
			else {
				std::cout << "Error: invalid output file" << std::endl;
			}
		}
		else if (!ifs.is_open()) {
			std::cout << "Error: invalid input file" << std::endl;
		}
	}
	else {
			std::cout << "Error: invalid count argument" << std::endl;
	}
	return (0);
}
