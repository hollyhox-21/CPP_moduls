//
// Created by Retro Joella on 4/19/21.
//

#ifndef CPP04_SQUAD_HPP
#define CPP04_SQUAD_HPP
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include <string>

class Squad : public ISquad {
public:
	Squad();
	Squad(Squad const & other);
	virtual ~Squad();
	
	Squad &	operator=(Squad const & other);
	
	int getCount() const;
	ISpaceMarine* getUnit(int) const;
	int push(ISpaceMarine*);
	
private:
	int				_size;
	ISpaceMarine	**_squad;
};

#endif //CPP04_SQUAD_HPP
