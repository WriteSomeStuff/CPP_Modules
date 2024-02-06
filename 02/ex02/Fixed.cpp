/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/24 15:08:17 by cschabra      #+#    #+#                 */
/*   Updated: 2024/02/06 11:41:47 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;

void	Fixed::setRawBits( int const raw )
{
	_value = raw;
}

int	Fixed::getRawBits( void ) const
{
	return (_value);
}

//	convert fixed-point value to a floating point value
float	Fixed::toFloat( void ) const
{
	return (static_cast<float>(getRawBits()) / (1 << _fractionalBits));
}

//	convert fixed-point value to an int
int	Fixed::toInt( void ) const
{
	return(this->getRawBits() / ( 1 << _fractionalBits));
}

Fixed::Fixed()
{
	this->setRawBits(0);
}

Fixed::Fixed(const Fixed& fn)
{
	*this = fn;
}

// convert the nr to corresponding fixed-point value
Fixed::Fixed(const int& nr)
{
	this->setRawBits(nr << _fractionalBits);
}

// convert the nr to corresponding fixed-point value after rounding it
Fixed::Fixed(const float& nr)
{
	this->setRawBits(std::roundf(nr * (1 << _fractionalBits)));
}

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

Fixed::~Fixed()
{
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

Fixed&	Fixed::min(Fixed& fn1, Fixed& fn2)
{
	if (fn1 < fn2)
		return (fn1);
	return (fn2);
}

const Fixed&	Fixed::min(const Fixed& fn1, const Fixed& fn2)
{
	if (fn1 < fn2)
		return (fn1);
	return (fn2);
}

Fixed&	Fixed::max(Fixed& fn1, Fixed& fn2)
{
	if (fn1 > fn2)
		return (fn1);
	return (fn2);
}

const Fixed&	Fixed::max(const Fixed& fn1, const Fixed& fn2)
{
	if (fn1 > fn2)
		return (fn1);
	return (fn2);
}
