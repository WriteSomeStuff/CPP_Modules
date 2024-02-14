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

void	Cat::makeSound() const
{
	std::cout << this->_sound << '\n';
}

Cat::Cat() : _sound("Meow")
{
	std::cout << "Cat default constructor called\n";
	this->setType("Cat");
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
		this->_sound = cat._sound;
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called\n";
}
