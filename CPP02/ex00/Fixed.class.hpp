//
// Created by Retro Joella on 4/2/21.
//

#ifndef CPP02_FIXED_CLASS_HPP
# define CPP02_FIXED_CLASS_HPP
# include <string>

class Fixed {
public:
	Fixed();
	Fixed(Fixed const & other);
	~Fixed();
	
	Fixed&	operator=(Fixed const & other);
	int getRawBits(void) const;
	void setRawBits(int const raw);
private:
	int					_fixNumb;
	static const int	_s_mantis = 8;
};

#endif //CPP02_FIXED_CLASS_HPP
