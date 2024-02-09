/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/07 12:42:32 by cschabra      #+#    #+#                 */
/*   Updated: 2024/02/09 15:40:49 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

void	currentState(DiamondTrap& mutation)
{
	std::cout << "--------------------------------------------------------------------\n";
	std::cout << "HP: " << mutation.getHp() << "\nMP: " \
		<< mutation.getMp() << "\nDMG: " << mutation.getDamage() << '\n';
	std::cout << "--------------------------------------------------------------------\n";
}

int	main(void)
{
	DiamondTrap	mutation("Diamond");

	currentState(mutation);
	mutation.whoAmI();
	mutation.ScavTrap::attack("itself");
	std::cout << "--------------------------------------------------------------------\n";
}
