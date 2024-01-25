/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FixedNumber.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/24 15:08:23 by cschabra      #+#    #+#                 */
/*   Updated: 2024/01/25 17:21:09 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXEDNUMBER_HPP
# define FIXEDNUMBER_HPP

#include <iostream>
#include <string>

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
