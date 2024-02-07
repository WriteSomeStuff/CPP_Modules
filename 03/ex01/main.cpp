/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/07 12:42:32 by cschabra      #+#    #+#                 */
/*   Updated: 2024/02/07 12:42:59 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

void	currentState(ClapTrap& robot1, ClapTrap& robot2)
{
	std::cout << robot1.getName() << ":\n HP: " << robot1.getHp() << "\n MP: " << robot1.getMp() << '\n';
	std::cout << robot2.getName() << ":\n HP: " << robot2.getHp() << "\n MP: " << robot2.getMp() << '\n';
}

void	fight(ClapTrap& attacker, ClapTrap& healer)
{
	if (attacker.getHp() > 0)
	{
		attacker.attack(healer.getName());
		if (attacker.getMp() > 0)
			healer.takeDamage(attacker.getDamage());	
	}
	if (healer.getHp() > 0)
		healer.beRepaired(2);
}

int	main(void)
{
	ClapTrap	robot1("ClapTrap Moxxi");
	ClapTrap	robot2("ClapTrap Tina");
	std::cout << "--------------------------------------------------------------------\n";

	while (robot2.getHp() > 0 && robot1.getMp() > 0)
	{
		fight(robot1, robot2);
		currentState(robot1, robot2);
		fight(robot2, robot1);
		currentState(robot1, robot2);
		std::cout << "--------------------------------------------------------------------\n";
	}
	fight(robot1, robot2);
	currentState(robot1, robot2);
	std::cout << "--------------------------------------------------------------------\n";
}
