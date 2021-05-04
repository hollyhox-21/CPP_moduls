//
// Created by Retro Joella on 4/14/21.
//

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include <iostream>

void	cmdMeleeAttack(ClapTrap & attacker, ClapTrap & target) {
	if (target.getHp() > 0) {
		target.takeDamage(attacker.meleeAttack(target.getName()));
		attacker.listСhar();
		target.listСhar();
	}
	else
		std::cout << "☠target is die!!☠" << std::endl;
}

void	cmdRangedAttack(ClapTrap & attacker, ClapTrap & target) {
	if (target.getHp() > 0){
		target.takeDamage(attacker.rangedAttack(target.getName()));
		attacker.listСhar();
		target.listСhar();
	}
	else
		std::cout << "☠target is die!!☠" << std::endl;
}

void	cmdbeRepaired(ClapTrap & target, unsigned int amount) {
	target.beRepaired(amount);
}

void	cmdVaultHunter(FragTrap & attacker, ClapTrap & target) {
	attacker.vaulthunter_dot_exe(target.getName());
}

void	cmdchallengeNewcomer(ScavTrap & attacker, ClapTrap & target) {
	attacker.challengeNewcomer(target.getName());
}

void	cmdNinjaShoebox(NinjaTrap & attacker, ClapTrap & target) {
	target.takeDamage(attacker.ninjaShoebox(target));
	attacker.listСhar();
	target.listСhar();
}


int main() {
	NinjaTrap	Ninja("Ninja");
	NinjaTrap	Secret("Naruto");
	FragTrap	Rick("Rick");
	ScavTrap	Morty("Morty");
	ClapTrap	MegaTron("MegaTron");
	
	cmdRangedAttack(Rick, Ninja);
	cmdRangedAttack(Rick, Ninja);
	cmdMeleeAttack(MegaTron, Rick);
	
	
	cmdchallengeNewcomer(Morty, MegaTron);
	cmdNinjaShoebox(Ninja, Rick);
	cmdNinjaShoebox(Secret, Ninja);
	return 0;
}