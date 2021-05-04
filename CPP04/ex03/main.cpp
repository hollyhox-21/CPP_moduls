//
// Created by Retro Joella on 4/21/21.
//

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(1, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	std::cout << me->getStorage()[0]->getXP() << std::endl;
	
	std::cout << me->getStorage()[1]->getXP() << std::endl;
	std::cout << me->getStorage()[2]->getXP() << std::endl;
	delete bob;
	delete me;
	delete src;
	return 0;
}