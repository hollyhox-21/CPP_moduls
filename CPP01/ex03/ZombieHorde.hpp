//
// Created by Retro Joella on 3/31/21.
//

#ifndef CCP01_ZOMBIEHORDE_HPP
# define CCP01_ZOMBIEHORDE_HPP
# include <string>
# include "Zombie.hpp"

class ZombieHorde {
public:
	ZombieHorde(int countZombie);
	~ZombieHorde();
	
	void		announce();
	Zombie*		getHorde() const;
private:
	void		setZombieType(Zombie& myZombie);
	void		setZombieName(Zombie& myZombie);
	int			_sizeHorde;
	Zombie*		_zombieHorde;

};

#endif //CCP01_ZOMBIEHORDE_HPP
