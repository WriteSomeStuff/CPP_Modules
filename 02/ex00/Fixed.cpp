/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/24 15:08:17 by cschabra      #+#    #+#                 */
/*   Updated: 2024/01/25 17:41:53 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

void	Fixed::setRawBits( int const raw )
{
	_value = raw;
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called\n";
	return (_value);
}

Fixed::Fixed()
{
	this->setRawBits(0);
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& fn)
{
	std::cout << "Copy constructor called\n";
	this->setRawBits(fn.getRawBits());
}

Fixed& Fixed::operator=(const Fixed& fn)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &fn)
		this->setRawBits(fn.getRawBits());
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}
