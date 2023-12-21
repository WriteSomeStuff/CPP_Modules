/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/06 13:07:14 by cschabra      #+#    #+#                 */
/*   Updated: 2023/12/21 18:11:02 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

// input example: ./replace test.txt replaceme >:C
int main(int argc, char **argv)
{
	std::string	fileName;
	std::string	s1;
	std::string	s2;

	if (argc < 4)
	{
		std::cout << ERRMSG;
		return (EXIT_FAILURE);
	}
	fileName = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	if (!s1[0] || !s2[0])
	{
		std::cout << ERRMSG;
		return (EXIT_FAILURE);
	}
	Replace	start(fileName, s1, s2);
	if (!start.handleFile())
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
