/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/20 17:28:04 by cschabra      #+#    #+#                 */
/*   Updated: 2023/11/21 16:33:26 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie*	horde;

	try
	{
		horde = new Zombie[N];
	}
	catch(const std::bad_alloc& ex)
	{
		std::cerr << ex.what() << '\n';
		return (NULL);
	}
	for (size_t i = 0; i < N; i++)
		horde[i].setName(name);
	return (horde);
}
