/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/13 13:51:49 by cschabra      #+#    #+#                 */
/*   Updated: 2024/02/13 14:35:08 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

void	WrongAnimal::makeSound() const
{
	std::cout << "Quack\n";
}

std::string	WrongAnimal::getType() const
{
	return (_type);
}

void	WrongAnimal::setType(const std::string& type)
{
	_type = type;
}

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& Wronganimal)
{
	std::cout << "WrongAnimal copy constructor called\n";
	*this = Wronganimal;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& Wronganimal)
{
	std::cout << "WrongAnimal copy assignment operator called\n";
	if (this != &Wronganimal)
		this->setType(Wronganimal.getType());
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called\n";
}
