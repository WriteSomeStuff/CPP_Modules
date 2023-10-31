/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/23 17:30:25 by cschabra      #+#    #+#                 */
/*   Updated: 2023/10/31 18:34:29 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	display_single_contact(PhoneBook& phonebook, int index)
{
	std::cout << "First name: " << phonebook.contacts[index].first_name << "\n";
	std::cout << "Last name: " << phonebook.contacts[index].last_name << "\n";
	std::cout << "Nickname: " << phonebook.contacts[index].nickname << "\n";
	std::cout << "Phone number: " << phonebook.contacts[index].phone_nr << "\n";
	std::cout << "Darkest secret: " << phonebook.contacts[index].secret << "\n";
}

int	display_all_contacts(PhoneBook& phonebook, int index, int amount)
{
	std::string	fn, ln, nn;

	while (index <= amount)
	{
		fn = phonebook.contacts[index].first_name.substr(0, 10);
		ln = phonebook.contacts[index].last_name.substr(0, 10);
		nn = phonebook.contacts[index].nickname.substr(0, 10);
		if (phonebook.contacts[index].first_name.length() > 10)
			fn[9] = '.';
		if (phonebook.contacts[index].last_name.length() > 10)
			ln[9] = '.';
		if (phonebook.contacts[index].nickname.length() > 10)
			nn[9] = '.';
		std::cout << std::setw(10) << (index + 1) << "|" \
			<< std::setw(10) << fn << "|" \
			<< std::setw(10) << ln << "|" \
			<< std::setw(10) << nn << "\n";
		index++;
	}
	return (index);
}

void	search_phonebook(PhoneBook& phonebook, int amount)
{
	int			index (0);
	std::string	input;

	std::cout << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name" << "|" \
		<< std::setw(10) << "Last Name" << "|" << std::setw(10) << "Nickname\n";
	std::cout << "-------------------------------------------\n";
	index = display_all_contacts(phonebook, index, amount);
	std::cout << "Enter the index of the contact you want to see: ";
	std::getline(std::cin, input);
	std::stringstream ss(input);
	if (!(ss >> index) || index < 1 || index > 8)
		std::cout << "Search only accepts numbers 1 to 8.\n";
	else
		display_single_contact(phonebook, (index - 1));	
}

void	store_input(PhoneBook& phonebook, int i)
{
	std::cout << "Type in the first name: ";
	std::getline(std::cin, phonebook.contacts[i].first_name);
	std::cout << "Type in the last name: ";
	std::getline(std::cin, phonebook.contacts[i].last_name);
	std::cout << "Type in the nickname: ";
	std::getline(std::cin, phonebook.contacts[i].nickname);
	std::cout << "Type in the phone number: ";
	std::getline(std::cin, phonebook.contacts[i].phone_nr);
	std::cout << "Type in the darkest secret: ";
	std::getline(std::cin, phonebook.contacts[i].secret);
	std::cout << "Added! :)\n";
}

void	start_up()
{
	std::string	input;
	PhoneBook	phonebook;
	int			i (0);

	while (input != "EXIT")
	{
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			if (i == 8)
				i = 0;
			store_input(phonebook, i);
			i++;
			if (phonebook.amount < 7)
				phonebook.amount++;
		}
		else if (input == "SEARCH" && phonebook.amount > 0)
			search_phonebook(phonebook, phonebook.amount);
		else if (input == "SEARCH" && phonebook.amount == 0)
			std::cout << "Still empty, add at least one contact.\n";
		std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
		std::cout << "Choose ADD, SEARCH or EXIT.\n";
	}
	std::cout << "Buhbye!";
}

int	main(void)
{
	std::cout << "This phonebook is empty, please fill :)\n";
	std::cout << "Choose ADD, SEARCH or EXIT.\n";
	start_up();
}
