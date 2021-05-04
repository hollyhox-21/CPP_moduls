//
// Created by Retro Joella on 3/31/21.
//

#ifndef CCP01_HUMAN_HPP
# define CCP01_HUMAN_HPP
# include <iostream>
# include <string>
# include "Brain.hpp"

class	Human {
public:
	Human();
	~Human();

	std::string	identify();
	Brain const & 	getBrain() const;
private:
	Brain	_brainHuman;
};

#endif //CCP01_HUMAN_HPP
