/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/28 14:26:17 by cschabra      #+#    #+#                 */
/*   Updated: 2023/12/28 16:27:18 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	harl;

	if (argc < 2 || argc > 2)
	{
		std::cout <<  "Please try:\n./harlFilter DEBUG\n./harlFilter INFO\n./harlFilter WARNING\n./harlFilter ERROR\n" << \
			"or:\n./harlFilter \"Something random\"\n";
		return (EXIT_FAILURE);
	}
	harl.complain(argv[1]);
}
