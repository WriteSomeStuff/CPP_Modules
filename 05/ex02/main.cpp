/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/02 13:18:22 by cschabra      #+#    #+#                 */
/*   Updated: 2024/07/02 13:18:23 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

int	main()
{
	try
	{
		Bureaucrat	a("Lillia", 1);
		Bureaucrat	b("Smolder", 150);
		Bureaucrat	c("Gnar", 66);

		std::cout << "----------------------------------------------------\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error on construction: " << e.what();
	}
}
