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

#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Bureaucrat	a("Lillia", 1);
		Bureaucrat	b("Smolder", 150);
		Bureaucrat	c("Gnar", 66);

		std::cout << a;
		std::cout << b;
		std::cout << c;
		std::cout << "----------------------------------------------------\n";

		// Bureaucrat	d("Warwick", 0);
		// Bureaucrat	e("Nami", -1);
		// Bureaucrat	f("Ahri", 157);
		// std::cout << "----------------------------------------------------\n";

		a.incrementGrade();
		std::cout << a;
		a.decrementGrade();
		std::cout << a;
		std::cout << "----------------------------------------------------\n";

		// Bureaucrat	h;
		// std::cout << h;

		// Bureaucrat	g(a);
		// std::cout << g;

		// g = h;
		// std::cout << g;
		// std::cout << "----------------------------------------------------\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
