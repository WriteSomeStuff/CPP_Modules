/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/20 16:09:05 by cschabra      #+#    #+#                 */
/*   Updated: 2023/11/20 18:02:45 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// add own test

int	main(void)
{
	Zombie		*horde;
	std::string	input;
	int			amount;

	std::cout << "Enter the amount of zombies: ";
	std::getline(std::cin, input);
	std::stringstream ss(input);
	if (!(ss >> amount) || amount < 1 || amount > INT32_MAX)
		std::cout << "More than one and below max int please!\n";
	std::cout << "Enter the name of the horde: ";
	std::getline(std::cin, input);
	horde = zombieHorde(amount, input);
	for (size_t i = 0; i < amount; i++)
		delete horde; // check how to delete right, now its wrong
}
