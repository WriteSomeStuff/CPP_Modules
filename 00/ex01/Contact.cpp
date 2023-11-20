/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/20 13:14:45 by cschabra      #+#    #+#                 */
/*   Updated: 2023/11/20 15:48:18 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void	Contact::display_single_contact(void)
{
	std::cout << "First name: " << first_name << \
		"\nLast name: " << last_name << \
		"\nNickname: " << nickname << \
		"\nPhone number: " << phone_nr << \
		"\nDarkest secret: " << secret << '\n';
}

void	Contact::display_all_contacts(int index)
{
	std::string	fn, ln, nn;

	fn = first_name.substr(0, 10);
	ln = last_name.substr(0, 10);
	nn = nickname.substr(0, 10);
	if (first_name.length() > 10)
		fn[9] = '.';
	if (last_name.length() > 10)
		ln[9] = '.';
	if (nickname.length() > 10)
		nn[9] = '.';
	std::cout << std::setw(10) << (index + 1) << "|" \
		<< std::setw(10) << fn << "|" \
		<< std::setw(10) << ln << "|" \
		<< std::setw(10) << nn << '\n';
}

void	Contact::store_input(void)
{
	std::cout << "Type in the first name: ";
	std::getline(std::cin, first_name);
	std::cout << "Type in the last name: ";
	std::getline(std::cin, last_name);
	std::cout << "Type in the nickname: ";
	std::getline(std::cin, nickname);
	std::cout << "Type in the phone number: ";
	std::getline(std::cin, phone_nr);
	std::cout << "Type in the darkest secret: ";
	std::getline(std::cin, secret);
	std::cout << "Added! :)\n";
}


Contact::Contact() : first_name(""), last_name(""), nickname(""), phone_nr(""), secret("")
{
}
