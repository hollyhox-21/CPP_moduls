//
// Created by Retro Joella on 4/19/21.
//

#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"
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

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISpaceMarine* jayck = new TacticalMarine;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	vlc->push(jayck);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	std::cout << BRIGHT_CYAN << "|---------|" << END << std::endl;
	Squad src;
	ISpaceMarine* a = new TacticalMarine;
	ISpaceMarine* b = new AssaultTerminator;
	src.push(a);
	src.push(b);
	for (int i = 0; i < src.getCount(); ++i)
	{
		ISpaceMarine* cur = src.getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << BRIGHT_CYAN << "|---------|" << END << std::endl;
	Squad *dest = new Squad(src);
	for (int i = 0; i < dest->getCount(); ++i)
	{
		ISpaceMarine* cur = dest->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << BRIGHT_CYAN << "|---------|" << END << std::endl;
	
	Squad test;
	test = *dest;
	delete dest;
	for (int i = 0; i < test.getCount(); ++i)
	{
		ISpaceMarine* cur = test.getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << BRIGHT_CYAN << "|---------|" << END << std::endl;

	return 0;
}