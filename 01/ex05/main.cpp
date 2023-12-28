/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/28 14:26:17 by cschabra      #+#    #+#                 */
/*   Updated: 2023/12/28 14:43:17 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

static bool	checkInput()
{
	
}

int	main(int argc, char **argv)
{
	Harl	harl;

	if (argc < 2 || argc > 2 || !checkInput())
	{
		std::cout << "wrong input";
		return (EXIT_FAILURE);
	}
	harl.complain("eke");
}
