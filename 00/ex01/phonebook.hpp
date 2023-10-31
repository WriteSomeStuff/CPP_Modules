/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/23 17:30:22 by cschabra      #+#    #+#                 */
/*   Updated: 2023/10/31 18:34:29 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <sstream>

class PhoneBook
{
	public:
	class Contact
	{
		public:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_nr;
		std::string	secret;
		Contact() : first_name(""), last_name(""), nickname(""), phone_nr(""), secret("") {}
	};
	Contact	contacts[8];
	int		amount;
	PhoneBook() : amount(0) {}
};

# endif