/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/24 17:08:23 by cschabra      #+#    #+#                 */
/*   Updated: 2024/01/25 17:28:09 by cschabra      ########   odam.nl         */
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
	static const int	_fractionalBits = 8;

	public:
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	Fixed();
	Fixed(const Fixed& fn);
	Fixed& operator=(const Fixed& fn);
	~Fixed();
};

#endif
