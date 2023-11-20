/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/20 16:04:31 by cschabra      #+#    #+#                 */
/*   Updated: 2023/11/20 17:10:37 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	private:
	std::string	_name;

	public:
	void	announce( void );
	void	setName( std::string input );
	Zombie();
	Zombie( std::string name );
	~Zombie();
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

# endif