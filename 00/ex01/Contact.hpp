/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/20 13:14:54 by cschabra      #+#    #+#                 */
/*   Updated: 2023/11/20 15:49:20 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "PhoneBook.hpp"

class Contact
{
	private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_nr;
	std::string	secret;

	public:
	void	display_single_contact(void);
	void	display_all_contacts(int index);
	void	store_input(void);
	Contact();
};

# endif