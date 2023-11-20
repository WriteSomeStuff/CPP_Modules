/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/20 16:09:05 by cschabra      #+#    #+#                 */
/*   Updated: 2023/11/20 17:57:28 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::setName(std::string input)
{
	_name = input;
}

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << _name << " has been destroyed.\n";
}
