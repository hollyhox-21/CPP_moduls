//
// Created by Retro Joella on 4/13/21.
//

#include <iostream>
#include <string>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

void	cmdMeleeAttack(FragTrap & attacker, FragTrap & target) {
	attacker.takeDamage(target.meleeAttack(attacker.getName()));
	target.listСhar();
	attacker.listСhar();
}

void	cmdMeleeAttack(ScavTrap & attacker, FragTrap & target) {
	attacker.takeDamage(target.meleeAttack(attacker.getName()));
	target.listСhar();
	attacker.listСhar();
}

void	cmdMeleeAttack(FragTrap & attacker, ScavTrap & target) {
	attacker.takeDamage(target.meleeAttack(attacker.getName()));
	target.listСhar();
	attacker.listСhar();
}

void	cmdMeleeAttack(ScavTrap & attacker, ScavTrap & target) {
	attacker.takeDamage(target.meleeAttack(attacker.getName()));
	target.listСhar();
	attacker.listСhar();
}


void	cmdRangedAttack(FragTrap & attacker, FragTrap & target) {
	attacker.takeDamage(target.rangedAttack(attacker.getName()));
	target.listСhar();
	attacker.listСhar();
}

void	cmdRangedAttack(ScavTrap & attacker, FragTrap & target) {
	attacker.takeDamage(target.rangedAttack(attacker.getName()));
	target.listСhar();
	attacker.listСhar();
}

void	cmdRangedAttack(FragTrap & attacker, ScavTrap & target) {
	attacker.takeDamage(target.rangedAttack(attacker.getName()));
	target.listСhar();
	attacker.listСhar();
}

void	cmdRangedAttack(ScavTrap & attacker, ScavTrap & target) {
	attacker.takeDamage(target.rangedAttack(attacker.getName()));
	target.listСhar();
	attacker.listСhar();
}

void	cmdVaultHunter(FragTrap & attacker, FragTrap & target) {
	target.vaulthunter_dot_exe(attacker.getName());
	target.listСhar();
	attacker.listСhar();
}
void	cmdchallengeNewcomer(ScavTrap & attacker) {
	attacker.challengeNewcomer();
	attacker.listСhar();
}

int	main() {
	
	FragTrap Frag("Naruto");
	ScavTrap Scav("Saske");
	
	cmdMeleeAttack(Frag, Scav);
	cmdMeleeAttack(Scav, Frag);
	cmdRangedAttack(Frag, Scav);
	cmdRangedAttack(Scav, Frag);
	
	Scav.beRepaired(30);
	Frag.beRepaired(30);
	Scav.listСhar();
	Frag.listСhar();
	
	cmdchallengeNewcomer(Scav);
	cmdchallengeNewcomer(Scav);
	cmdchallengeNewcomer(Scav);
	
	
	
	return 0;
}