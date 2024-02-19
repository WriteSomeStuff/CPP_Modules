/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/14 13:46:50 by cschabra      #+#    #+#                 */
/*   Updated: 2024/02/14 14:28:03 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called\n";
}

Brain::Brain(const Brain& b)
{
	std::cout << "Brain copy constructor called\n";
	*this = b;
}

Brain& Brain::operator=(const Brain& b)
{
	std::cout << "Brain copy assignment operator called\n";
	if (this != &b)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = b._ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called\n";
}
