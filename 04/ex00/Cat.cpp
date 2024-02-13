/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/13 13:51:49 by cschabra      #+#    #+#                 */
/*   Updated: 2024/02/13 14:35:08 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor called\n";
	this->setType("Cat");
	this->setSound("meow");
}
Cat::Cat(const Cat& cat)
{
	std::cout << "Cat copy constructor called\n";
	*this = cat;
}

Cat&	Cat::operator=(const Cat& cat)
{
	std::cout << "Cat copy assignment operator called\n";
	if (this != &cat)
	{
		this->setType(cat.getType());
		this->setSound(cat.getSound());
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called\n";
}
