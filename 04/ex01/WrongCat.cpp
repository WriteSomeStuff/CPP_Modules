/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/13 13:51:49 by cschabra      #+#    #+#                 */
/*   Updated: 2024/02/27 14:44:21 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

void	WrongCat::makeSound() const
{
	std::cout << this->_sound << '\n';
}

WrongCat::WrongCat() : _sound("Purr")
{
	std::cout << "WrongCat default constructor called\n";
	this->setType("WrongCat");
}

WrongCat::WrongCat(const WrongCat& wrongCat)
{
	std::cout << "WrongCat copy constructor called\n";
	*this = wrongCat;
}

WrongCat&	WrongCat::operator=(const WrongCat& wrongCat)
{
	std::cout << "WrongCat copy assignment operator called\n";
	if (this != &wrongCat)
	{
		this->setType(wrongCat.getType());
		this->_sound = wrongCat._sound;
	}
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called\n";
}
