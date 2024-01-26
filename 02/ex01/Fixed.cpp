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

int	Fixed::getRawBits( void ) const
{
	return (_value);
}

float	Fixed::toFloat( void ) const
{
	float	res (0.0f);
	return (res);
	// call the toInt function
	// divide the nr by 2^n
	// if fixed point value < 0 convert back from two's complement??

	//	convert fixed point value to a floating point value
}

int	Fixed::toInt( void ) const
{
	return(this->getRawBits() >> (_fractionalBits - 1));
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

Fixed::Fixed(const int& nr)
{
	std::cout << "Int constructor called\n";
	this->setRawBits(nr << (_fractionalBits - 1));

	// convert the nr to corresponding fixed point value
}

Fixed::Fixed(const float& nr)
{
	std::cout << "Float constructor called\n";
	this->setRawBits(nr);
	// multiply by 2^fractionalbits
	// round to nearest int (roundf)
	// if float nr is negative take two's complement of value at step 2

	// convert the nr to corresponding fixed-point value
}

Fixed&	Fixed::operator=(const Fixed& fn)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &fn)
		this->setRawBits(fn.getRawBits());
	return (*this);
}

std::ostream&	operator<<(std::ostream& co, const Fixed& fn)
{
	co << fn.getRawBits();
	return (co);
	// insert floating point representation of fixed point nr to output stream parameter
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}
