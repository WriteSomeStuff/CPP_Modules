/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/13 13:51:52 by cschabra      #+#    #+#                 */
/*   Updated: 2024/02/13 14:35:11 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

void	Dog::makeSound() const
{
	std::cout << this->_sound << '\n';
}

Dog::Dog() : _sound("Woof")
{
	std::cout << "Dog default constructor called\n";
	this->_brain = new Brain();
	this->setType("Dog");
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
		this->_sound = dog._sound;
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called\n";
	delete(this->_brain);
}
