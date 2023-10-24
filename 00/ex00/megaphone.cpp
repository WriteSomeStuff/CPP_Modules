/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/23 17:16:33 by cschabra      #+#    #+#                 */
/*   Updated: 2023/10/24 13:52:35 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
// #include <string>

void	capitalise(char **argv)
{
	int		i;
	int		j;
	char	c;

	i = 1;
	j = 0;
	while (argv[i])
	{
		while (argv[i][j])
		{
			c = toupper(argv[i][j]);
			std::cout << c;
			j++;
		}
		j = 0;
		i++;
	}
	std::cout << "\n";
}

int	main(int argc, char **argv)
{
	std::string	ExpectedStr = "shhhhh... I think the students are asleep...";

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
		capitalise(argv);
}
