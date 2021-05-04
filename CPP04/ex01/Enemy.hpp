//
// Created by Retro Joella on 4/18/21.
//

#ifndef CPP04_ENEMY_HPP
#define CPP04_ENEMY_HPP
#include <string>

class	Enemy {
public:
	Enemy(int hp, std::string const & type);
	virtual ~Enemy();
	
	std::string const & getType() const;
	int getHP() const;
	virtual void takeDamage(int);
	
protected:
	Enemy();
	int			_hp;
	std::string	_type;
};


#endif //CPP04_ENEMY_HPP
