/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Operators.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/06 12:38:30 by cschabra      #+#    #+#                 */
/*   Updated: 2024/02/06 12:40:04 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed&	Fixed::operator=(const Fixed& fn)
{
	if (this != &fn)
		this->setRawBits(fn.getRawBits());
	return (*this);
}

// insert floating point representation of fixed point nr to output stream parameter
std::ostream&	operator<<(std::ostream& co, const Fixed& fn)
{
	co << fn.toFloat();
	return (co);
}

bool	Fixed::operator>(const Fixed& fn) const
{
	if (this->getRawBits() > fn.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed& fn) const
{
	if (this->getRawBits() < fn.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed& fn)
{
	if (this->getRawBits() >= fn.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed& fn)
{
	if (this->getRawBits() <= fn.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator==(const Fixed& fn)
{
	if (this->getRawBits() == fn.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed& fn)
{
	if (this->getRawBits() != fn.getRawBits())
		return (true);
	return (false);
}

Fixed	Fixed::operator+(const Fixed& fn)
{
	Fixed	tmp(this->toFloat() + fn.toFloat());

	return (tmp);
}

Fixed	Fixed::operator-(const Fixed& fn)
{
	Fixed	tmp(this->toFloat() - fn.toFloat());

	return (tmp);
}

Fixed	Fixed::operator*(const Fixed& fn)
{
	Fixed	tmp(this->toFloat() * fn.toFloat());

	return (tmp);
}

Fixed	Fixed::operator/(const Fixed& fn)
{
	Fixed	tmp(this->toFloat() / fn.toFloat());

	return (tmp);
}

Fixed&	Fixed::operator--()
{
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);

	this->setRawBits(this->getRawBits() - 1);
	return (tmp);
}

Fixed&	Fixed::operator++()
{
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);

	this->setRawBits(this->getRawBits() + 1);
	return (tmp);
}
