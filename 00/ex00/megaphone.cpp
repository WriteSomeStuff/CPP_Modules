/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/23 17:16:33 by cschabra      #+#    #+#                 */
/*   Updated: 2023/10/24 14:09:57 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
// #include <string>

void	ToUpperArray(char **argv)
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
	std::cout << '\n';
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
		ToUpperArray(argv);
}
