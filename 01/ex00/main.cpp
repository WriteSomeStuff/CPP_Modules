/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/20 16:09:05 by cschabra      #+#    #+#                 */
/*   Updated: 2023/11/20 17:21:25 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int argc, char **argv)
{
	Zombie	*zombie;

	if (argc != 3)
	{
		std::cout << "Name two zombies, like ./zombies Rick Daryl\n";
		return (EXIT_SUCCESS);
	}
	zombie = newZombie(argv[1]);
	zombie->announce();
	randomChump(argv[2]);
	delete zombie;
}
