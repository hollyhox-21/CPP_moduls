//
// Created by Retro Joella on 4/11/21.
//

#include <iostream>
#include "FragTrap.hpp"

void	cmdMeleeAttack(FragTrap & attacker, FragTrap & target) {
	attacker.takeDamage(target.meleeAttack(attacker.getName()));
	target.listСhar();
	attacker.listСhar();
}

void	cmdRangedAttack(FragTrap & attacker, FragTrap & target) {
	attacker.takeDamage(target.rangedAttack(attacker.getName()));
	target.listСhar();
	attacker.listСhar();
}

void	cmdVaultHunter(FragTrap & attacker, FragTrap & target) {
	target.vaulthunter_dot_exe(attacker.getName());
	target.listСhar();
	attacker.listСhar();
}

int main() {
	srand(time(0));
	FragTrap FR4G_TP_one("Flavon");
	FragTrap FR4G_TP_two("Sjakku");
	
	cmdMeleeAttack(FR4G_TP_one, FR4G_TP_two);
	cmdRangedAttack(FR4G_TP_two, FR4G_TP_one);
	cmdVaultHunter(FR4G_TP_one, FR4G_TP_two);
	cmdVaultHunter(FR4G_TP_two, FR4G_TP_one);
	FR4G_TP_two.beRepaired(20);
	FR4G_TP_two.listСhar();

	return 0;
}
