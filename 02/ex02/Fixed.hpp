/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/24 15:08:23 by cschabra      #+#    #+#                 */
/*   Updated: 2024/02/06 11:41:17 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	private:
	int					_value;
	static const int	_fractionalBits;

	public:
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;

	Fixed&				operator=(const Fixed& fn);

	bool				operator>(const Fixed& fn) const;
	bool				operator<(const Fixed& fn) const;
	bool				operator>=(const Fixed& fn);
	bool				operator<=(const Fixed& fn);
	bool				operator==(const Fixed& fn);
	bool				operator!=(const Fixed& fn);

	Fixed				operator+(const Fixed& fn);
	Fixed				operator-(const Fixed& fn);
	Fixed				operator*(const Fixed& fn);
	Fixed				operator/(const Fixed& fn);

	Fixed&				operator--();
	Fixed				operator--(int);
	Fixed&				operator++();
	Fixed				operator++(int);

	static Fixed&		min(Fixed& fn1, Fixed& fn2);
	static const Fixed&	min(const Fixed& fn1, const Fixed& fn2);
	static Fixed&		max(Fixed& fn1, Fixed& fn2);
	static const Fixed&	max(const Fixed& fn1, const Fixed& fn2);

	Fixed();
	Fixed(const Fixed& fn);
	Fixed(const int& nr);
	Fixed(const float& nr);
	~Fixed();
};

std::ostream&	operator<<(std::ostream& co, const Fixed& fn);

#endif
