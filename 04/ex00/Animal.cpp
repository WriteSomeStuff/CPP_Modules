/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/13 13:46:52 by cschabra      #+#    #+#                 */
/*   Updated: 2024/02/13 14:33:20 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

void	Animal::makeSound() const
{
	std::cout << this->getType() << " says " << this->getSound() << '\n';
}

std::string	Animal::getSound() const
{
	return (_sound);
}

void	Animal::setSound(const std::string& sound)
{
	_sound = sound;
}

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
	{
		this->setType(animal.getType());
		this->setSound(animal.getSound());
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called\n";
}
