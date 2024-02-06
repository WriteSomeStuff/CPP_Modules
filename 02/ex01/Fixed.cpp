/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/24 15:08:17 by cschabra      #+#    #+#                 */
/*   Updated: 2024/02/06 15:36:05 by cschabra      ########   odam.nl         */
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
	std::cout << "Default constructor called\n";
	this->setRawBits(0);
}

Fixed::Fixed(const Fixed& fn)
{
	std::cout << "Copy constructor called\n";
	*this = fn;
}

//	convert the nr to corresponding fixed-point value
Fixed::Fixed(const int& nr)
{
	std::cout << "Int constructor called\n";
	this->setRawBits(nr << _fractionalBits);
}

//	convert the nr to corresponding fixed-point value after rounding it
Fixed::Fixed(const float& nr)
{
	std::cout << "Float constructor called\n";
	this->setRawBits(std::roundf(nr * (1 << _fractionalBits)));
}

Fixed&	Fixed::operator=(const Fixed& fn)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &fn)
		this->setRawBits(fn.getRawBits());
	return (*this);
}

//	insert floating point representation of fixed point nr to output stream parameter
std::ostream&	operator<<(std::ostream& co, const Fixed& fn)
{
	co << fn.toFloat();
	return (co);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}
