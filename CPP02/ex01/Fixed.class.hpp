//
// Created by Retro Joella on 4/5/21.
//

#ifndef CPP02_FIXED_CLASS_HPP
# define CPP02_FIXED_CLASS_HPP
#include <cmath>
#include <string>
#include <iostream>

class Fixed {
public:
	Fixed();
	Fixed(float numb);
	Fixed(int numb);
	Fixed(Fixed const &);
	~Fixed();
	Fixed&		operator=(Fixed const &);
	
	int				toInt() const;
	float			toFloat() const;
private:
	int					_fixNumb;
	static const int	_mantis = 8;

};

std::ostream &	operator<<(std::ostream & o, Fixed const & numb);

#endif //CPP02_FIXED_CLASS_HPP
