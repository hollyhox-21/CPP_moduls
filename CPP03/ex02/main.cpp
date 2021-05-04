//
// Created by Retro Joella on 4/13/21.
//

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <string>
#include <iostream>

void	cmdMeleeAttack(ClapTrap & attacker, ClapTrap & target) {
	if (target.getHp() > 0) {
		target.takeDamage(attacker.meleeAttack(target.getName()));
		attacker.listСhar();
		target.listСhar();
	}
	else
		std::cout << "target is die!!" << std::endl;
}

void	cmdRangedAttack(ClapTrap & attacker, ClapTrap & target) {
	if (target.getHp() > 0){
		target.takeDamage(attacker.rangedAttack(target.getName()));
		attacker.listСhar();
		target.listСhar();
	}
	else
		std::cout << "target is die!!" << std::endl;
}

void	cmdbeRepaired(ClapTrap & target, unsigned int amount) {
	target.beRepaired(amount);
}

void	cmdVaultHunter(FragTrap & attacker, ClapTrap & target) {
	attacker.vaulthunter_dot_exe(target.getName());
}

void	cmdchallengeNewcomer(ScavTrap & attacker) {
	attacker.challengeNewcomer();
}

int	main() {
	srand(time(0));
	FragTrap Rick("Rick");
	ScavTrap Morty("Morty");
	
	cmdMeleeAttack(Rick, Morty);
	cmdMeleeAttack(Morty, Rick);
	cmdRangedAttack(Morty, Rick);
	cmdRangedAttack(Rick, Morty);
	cmdbeRepaired(Morty, 100);
	cmdbeRepaired(Rick, 10);
	cmdVaultHunter(Rick, Morty);
	cmdchallengeNewcomer(Morty);
	cmdchallengeNewcomer(Morty);
	cmdchallengeNewcomer(Morty);
	cmdchallengeNewcomer(Morty);
	cmdVaultHunter(Rick, Morty);
	cmdVaultHunter(Rick, Morty);
	cmdVaultHunter(Rick, Morty);
	cmdVaultHunter(Rick, Morty);
	cmdVaultHunter(Rick, Morty);
	
	
	return 0;
}