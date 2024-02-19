/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/14 13:46:50 by cschabra      #+#    #+#                 */
/*   Updated: 2024/02/14 14:28:03 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	protected:
	std::string _ideas[100];

	public:
	Brain();
	Brain(const Brain& b);
	Brain&	operator=(const Brain& b);
	~Brain();
};

#endif
