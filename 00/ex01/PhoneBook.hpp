/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/23 17:30:22 by cschabra      #+#    #+#                 */
/*   Updated: 2023/11/20 15:49:18 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <sstream>
# include "Contact.hpp"

class PhoneBook
{
	private:
	Contact	contacts[8];
	int		amount;

	public:
	void	start_up();
	void	search_phonebook(int amount);
	PhoneBook();
};

# endif