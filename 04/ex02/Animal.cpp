/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/13 13:46:52 by cschabra      #+#    #+#                 */
/*   Updated: 2024/02/19 17:19:00 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

std::string	Animal::getType() const
{
	return (_type);
}

void	Animal::setType(const std::string& type)
{
	_type = type;
}

Animal::Animal()
{
	std::cout << "Animal default constructor called\n";
}

Animal::Animal(const Animal& animal)
{
	std::cout << "Animal copy constructor called\n";
	*this = animal;
}

Animal&	Animal::operator=(const Animal& animal)
{
	std::cout << "Animal copy assignment operator called\n";
	if (this != &animal)
		this->setType(animal.getType());
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called\n";
}
