/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/23 17:30:25 by cschabra      #+#    #+#                 */
/*   Updated: 2023/10/30 18:46:30 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	SearchPhonebook()
{
	return ;
}

void	StoreInput()
{
	return ;
}

void	StartUp()
{
	std::string	input;

	while (input != "EXIT")
	{
		std::getline(std::cin, input);
		if (input == "ADD")
			StoreInput();
		else if (input == "SEARCH")
			SearchPhonebook();
	}
	std::cout << "Buhbye!";
}

int	main(void)
{
	std::cout << "This phonebook is empty, please fill :)\n";
	std::cout << "Choose ADD, SEARCH or EXIT.\n";
	StartUp();
}
