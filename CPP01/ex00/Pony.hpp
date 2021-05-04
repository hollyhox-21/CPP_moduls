//
// Created by Retro Joella on 3/30/21.
//

#ifndef CCP01_PONY_HPP
# define CCP01_PONY_HPP
# include <string>

class Pony {
public:
	Pony(const std::string &where);
	~Pony();
private:
	std::string _where;
	static int	_count;
};

#endif //CCP01_PONY_HPP
