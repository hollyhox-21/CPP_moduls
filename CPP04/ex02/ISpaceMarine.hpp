//
// Created by Retro Joella on 4/19/21.
//

#ifndef CPP04_ISPACEMARINE_HPP
#define CPP04_ISPACEMARINE_HPP

class ISpaceMarine
{
public:
	virtual ~ISpaceMarine() {}
	virtual ISpaceMarine* clone() const = 0;
	virtual void battleCry() const = 0;
	virtual void rangedAttack() const = 0;
	virtual void meleeAttack() const = 0;
};
#endif //CPP04_ISPACEMARINE_HPP
