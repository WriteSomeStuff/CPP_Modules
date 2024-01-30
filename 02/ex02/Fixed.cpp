/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/24 15:08:17 by cschabra      #+#    #+#                 */
/*   Updated: 2024/01/30 17:55:21 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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

int	Fixed::operator+(const Fixed& fn)
{
	return (this->getRawBits() + fn.getRawBits());
}

int	Fixed::operator-(const Fixed& fn)
{
	return (this->getRawBits() - fn.getRawBits());
}

int	Fixed::operator*(const Fixed& fn)
{
	return (this->getRawBits() * fn.getRawBits());
}

int	Fixed::operator/(const Fixed& fn)
{
	return (this->getRawBits() / fn.getRawBits());
}

Fixed&	Fixed::operator--()
{
	// do sumfin
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	// do sumfin
	return (*this);
}

Fixed&	Fixed::operator++()
{
	// do sumfin
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	// do sumfin
	return (*this);
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
	// do sumfin
}
