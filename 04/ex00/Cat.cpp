/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/13 13:51:49 by cschabra      #+#    #+#                 */
/*   Updated: 2024/02/27 13:18:54 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

void	Cat::makeSound() const
{
	std::cout << this->getSound() << '\n';
}

std::string	Cat::getSound() const
{
	return (_sound);
}

void	Cat::setSound(const std::string& sound)
{
	_sound = sound;
}

Cat::Cat()
{
	std::cout << "Cat default constructor called\n";
	this->setType("Cat");
	this->setSound("Meow");
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
