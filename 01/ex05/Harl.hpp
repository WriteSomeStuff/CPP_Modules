/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/28 14:26:14 by cschabra      #+#    #+#                 */
/*   Updated: 2023/12/28 14:31:49 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
	private:
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );

	public:
	void	complain( std::string level );
	Harl(/* args */);
	~Harl();
};

#endif
