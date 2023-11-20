/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/23 17:30:25 by cschabra      #+#    #+#                 */
/*   Updated: 2023/11/20 15:47:30 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void	PhoneBook::search_phonebook(int amount)
{
	int			index (0);
	std::string	input;

	std::cout << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name" << "|" \
		<< std::setw(10) << "Last Name" << "|" << std::setw(10) << "Nickname" << '\n' \
		<< "-------------------------------------------\n";
	while (index < amount)
	{
		contacts[index].display_all_contacts(index);
		index++;
	}
	std::cout << "Enter the index of the contact you want to see: ";
	std::getline(std::cin, input);
	std::stringstream ss(input);
	if (!(ss >> index) || index < 1 || index > 8)
		std::cout << "Search only accepts numbers 1 to 8.\n";
	else
		contacts[index - 1].display_single_contact();	
}

void	PhoneBook::start_up()
{
	std::string	input;
	int			i (0);

	while (input != "EXIT")
	{
		if (std::cin.eof() == true)
			break;
		std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" \
			<< "Choose ADD, SEARCH or EXIT.\n";
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			if (i == 8)
				i = 0;
			contacts[i].store_input();
			i++;
			if (amount < 8)
				amount++;
		}
		else if (input == "SEARCH" && amount > 0)
			search_phonebook(amount);
		else if (input == "SEARCH" && amount == 0)
			std::cout << "Still empty, add at least one contact.\n";
	}
	std::cout << "Buhbye!\n";
}

PhoneBook::PhoneBook() : amount(0)
{
}

int	main(void)
{
	PhoneBook phonebook;
	std::cout << "This phonebook is empty, please fill :)\n";
	phonebook.start_up();
}
