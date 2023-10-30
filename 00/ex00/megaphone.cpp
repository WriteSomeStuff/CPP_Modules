/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/23 17:16:33 by cschabra      #+#    #+#                 */
/*   Updated: 2023/10/30 14:25:18 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <cctype>

void	ToUpperArray(char **argv)
{
	std::stringstream str;
	int	i (1); 
	int	j (0);

	while (argv[i])
	{
		while (argv[i][j])
		{
			str << static_cast<char>(std::toupper(static_cast<unsigned char>(argv[i][j])));
			j++;
		}
		j = 0;
		i++;
	}
	std::cout << str.str() << '\n';
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
		ToUpperArray(argv);
}
