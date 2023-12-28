/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/20 16:09:05 by cschabra      #+#    #+#                 */
/*   Updated: 2023/12/28 14:46:19 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

static void	test(Zombie *horde, int amount)
{
	for (int i = 0; i < amount; i++)
		horde[i].announce();
}

int	main(void)
{
	Zombie		*horde;
	std::string	input;
	int			amount;

	std::cout << "Enter the amount of zombies: ";
	std::getline(std::cin, input);
	std::stringstream ss(input);
	if (!(ss >> amount) || amount < 1 || amount > 50000)
	{
		std::cout << "More than one and no higher than 50000!\n";
		return (EXIT_FAILURE);
	}
	std::cout << "Enter the name of the horde: ";
	std::getline(std::cin, input);
	horde = zombieHorde(amount, input);
	if (!horde)
		return (EXIT_FAILURE);
	test(horde, amount);
	delete[] horde;
}
