/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/21 16:45:07 by cschabra      #+#    #+#                 */
/*   Updated: 2023/11/21 17:00:35 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout << &str << '\n';
	std::cout << stringPTR << '\n';
	std::cout << &stringREF << '\n';

	std::cout << str << '\n';
	std::cout << *stringPTR << '\n';
	std::cout << stringREF << '\n';
}
