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

class Fixed
{
	private:
	int					_value;
	static const int	_fractionalBits;

	public:
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	Fixed();
	Fixed(const Fixed& fn);
	Fixed&	operator=(const Fixed& fn);
	~Fixed();
};

#endif
