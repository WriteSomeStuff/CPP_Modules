/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/23 17:30:22 by cschabra      #+#    #+#                 */
/*   Updated: 2023/10/23 17:30:23 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
// # include <sstream>
// # include <cctype>

class PhoneBook
{
	std::string Contacts[8];
	class Contact
	{
		public:
		std::string	FirstName;
		std::string	LastName;
		std::string	NickName;
		std::string	PhoneNr;
		std::string	Secret;
	};
};

# endif