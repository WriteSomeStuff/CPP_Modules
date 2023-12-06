/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/06 13:07:14 by cschabra      #+#    #+#                 */
/*   Updated: 2023/12/06 13:08:23 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int argc, char **argv)
{
	std::string	fileName;
	std::string	s1;
	std::string	s2;

	if (argc < 4)
	{
		std::cout << "Please use input like ./replace filename string1 string2\n";
		return (EXIT_FAILURE);
	}
	fileName = argv[1];
	s1 = argv[2];
	s2 = argv[3];

	Replace	start(fileName, s1, s2);
	if (!start.handleFile())
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
