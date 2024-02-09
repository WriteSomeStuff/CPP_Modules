/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/07 12:42:32 by cschabra      #+#    #+#                 */
/*   Updated: 2024/02/08 14:12:39 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

void	currentState(ClapTrap& robot1, ScavTrap& robot2, FragTrap& robot3)
{
	std::cout << robot1.getName() << ":\n HP: " << robot1.getHp() << "\n MP: " << robot1.getMp() << '\n';
	std::cout << robot2.getName() << ":\n HP: " << robot2.getHp() << "\n MP: " << robot2.getMp() << '\n';
	std::cout << robot3.getName() << ":\n HP: " << robot2.getHp() << "\n MP: " << robot2.getMp() << '\n';
}

void	scavAttack(ScavTrap& attacker, ClapTrap& healer, FragTrap& friendly)
{
	if (attacker.getHp() > 0)
	{
		attacker.attack(healer.getName());
		if (attacker.getMp() > 0)
			healer.takeDamage(attacker.getDamage());	
	}
	if (healer.getHp() > 0 && healer.getHp() < 10)
		healer.beRepaired(2);
	friendly.highFivesGuys();
}

void	clapAttack(ClapTrap& attacker, ScavTrap& healer, FragTrap& friendly)
{
	if (attacker.getHp() > 0)
	{
		attacker.attack(healer.getName());
		if (attacker.getMp() > 0)
			healer.takeDamage(attacker.getDamage());	
	}
	if (healer.getHp() > 0 && healer.getHp() < 100)
		healer.beRepaired(6);
	friendly.highFivesGuys();
}

int	main(void)
{
	ClapTrap	robot1("ClapTrap Moxxi");
	ScavTrap	robot2("ScavTrap Tina");
	FragTrap	robot3("FragTrap Lexus");
	currentState(robot1, robot2, robot3);
	std::cout << "--------------------------------------------------------------------\n";

	while (robot2.getHp() > 0 && robot1.getMp() > 0 && robot1.getHp() > 0 && robot2.getMp() > 0)
	{
		clapAttack(robot1, robot2, robot3);
		currentState(robot1, robot2, robot3);
		scavAttack(robot2, robot1, robot3);
		std::cout << "--------------------------------------------------------------------\n";
	}
	clapAttack(robot1, robot2, robot3);
	currentState(robot1, robot2, robot3);
	robot2.guardGate();
	std::cout << "--------------------------------------------------------------------\n";
}
