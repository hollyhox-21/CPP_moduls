//
// Created by Retro Joella on 4/16/21.
//

#ifndef CPP04_SORCERER_HPP
#define CPP04_SORCERER_HPP
#include <string>
#include <iostream>
#include "Victim.hpp"
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



class Sorcerer {
public:
	Sorcerer(std::string name, std::string title);
	Sorcerer(const Sorcerer & other);
	~Sorcerer();

	Sorcerer&		operator=(const Sorcerer & other);
	
	void			anounce() const;
	void polymorph(Victim const &) const;
	
	std::string		getName() const;
	std::string		getTitle() const;
	
private:
	std::string	_name;
	std::string	_title;
};

std::ostream &		operator<<(std::ostream & o, Sorcerer const & obj);

#endif //CPP04_SORCERER_HPP