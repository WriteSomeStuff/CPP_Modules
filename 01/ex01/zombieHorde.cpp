/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/20 17:28:04 by cschabra      #+#    #+#                 */
/*   Updated: 2023/11/20 17:59:44 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie*	horde;

	horde = new Zombie[N];
	for (size_t i = 0; i < N; i++)
	{
		horde[i].setName(name);
		horde[i].announce();
	}
	return (horde);
}
