/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/13 13:51:52 by cschabra      #+#    #+#                 */
/*   Updated: 2024/02/27 13:28:09 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

void	Dog::makeSound() const
{
	std::cout << this->getSound() << '\n';
}

std::string	Dog::getSound() const
{
	return (_sound);
}

void	Dog::setSound(const std::string& sound)
{
	_sound = sound;
}

Dog::Dog()
{
	std::cout << "Dog default constructor called\n";
	this->setType("Dog");
	this->setSound("Woof");
}

Dog::Dog(const Dog& dog)
{
	std::cout << "Dog copy constructor called\n";
	*this = dog;
}

Dog&	Dog::operator=(const Dog& dog)
{
	std::cout << "Dog copy assignment operator called\n";
	if (this != &dog)
	{
		this->setType(dog.getType());
		this->setSound(dog.getSound());
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called\n";
}
