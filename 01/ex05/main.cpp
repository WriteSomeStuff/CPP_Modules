/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/28 14:26:17 by cschabra      #+#    #+#                 */
/*   Updated: 2023/12/28 15:12:42 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

static bool	checkInput(std::string input)
{
	if (input == "DEBUG" || input == "INFO" || input == "WARNING" || input == "ERROR")
		return (true);
	return (false);
}

int	main(int argc, char **argv)
{
	Harl	harl;

	if (argc < 2 || argc > 2 || !checkInput(argv[1]))
	{
		std::cout <<  "Please try:\n./harl DEBUG\n./harl INFO\n./harl WARNING\n./harl ERROR\n";
		return (EXIT_FAILURE);
	}
	harl.complain(argv[1]);
}
