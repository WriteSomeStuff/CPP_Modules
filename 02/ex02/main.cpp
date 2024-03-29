/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/24 15:07:57 by cschabra      #+#    #+#                 */
/*   Updated: 2024/02/05 15:06:16 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed		a;
	Fixed		f;
	Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );


	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	Fixed const	c( Fixed( 5.05f ) / Fixed( 2 ) );
	Fixed const	d( Fixed( 5.05f ) + Fixed( 2 ) );
	Fixed const	e( Fixed( 5.05f ) - Fixed( 2 ) );

	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << e << std::endl;

	std::cout << f << std::endl;
	std::cout << ++f << std::endl;
	std::cout << --f << std::endl;
	std::cout << --f << std::endl;
	std::cout << --f << std::endl;
	std::cout << f * b << std::endl;

	return 0;
}
