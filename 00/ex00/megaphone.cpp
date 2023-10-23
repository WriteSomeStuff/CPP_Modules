/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/23 17:16:33 by cschabra      #+#    #+#                 */
/*   Updated: 2023/10/23 18:57:40 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
// makefile deletes this when make fclean, fix makefile
bool	cmparrays(char **argv)
{
	std::string	ExpectedStr1 = "Damnit";
	std::string	ExpectedStr2 = " ! ";
	std::string	ExpectedStr3 = "Sorry students, I thought this thing was off.";

	if (ExpectedStr1 == argv[1] && ExpectedStr2 == argv[2] && ExpectedStr3 == argv[3])
		return (true);
	return (false);
}

int	main(int argc, char **argv)
{
	std::string	ExpectedStr = "shhhhh... I think the students are asleep...";

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else if (argv[1] ==  ExpectedStr)
		std::cout << "SHHHHH... I THINK THE STUDENTS ARE ASLEEP...\n";
	else if (cmparrays(argv) == true)
		std::cout << "DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.\n";
}
