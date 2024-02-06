/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/05 16:18:59 by cschabra      #+#    #+#                 */
/*   Updated: 2024/02/06 17:55:33 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

const int	ClapTrap::_damage = 5;

void	currentState(ClapTrap& robot1, ClapTrap& robot2)
{
	std::cout << robot1.getName() << ":\n HP: " << robot1.getHp() << "\n MP: " << robot1.getMp() << '\n';
	std::cout << robot2.getName() << ":\n HP: " << robot2.getHp() << "\n MP: " << robot2.getMp() << '\n';
}

int	main(void)
{
	ClapTrap	robot1("Moxxi");
	ClapTrap	robot2("Tina");

	while (robot2.getHp() > 0)
	{
		robot1.attack(robot2.getName());
		robot2.takeDamage(robot1.getDamage());
		if (robot2.getHp() > 0)
			robot2.beRepaired(2);
		currentState(robot1, robot2);
	}
	robot1.attack(robot2.getName());
	robot2.takeDamage(robot1.getDamage());
	if (robot2.getHp() > 0)
		robot2.beRepaired(1);
	currentState(robot1, robot2);
}
// continue with checking if it all works, what if mp runs out but target still alive etc