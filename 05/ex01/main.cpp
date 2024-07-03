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

#include "Form.hpp"

int	main()
{
	try
	{
		Bureaucrat	a("Lillia", 1);
		Bureaucrat	b("Smolder", 150);
		Bureaucrat	c("Gnar", 66);
		Form	d("Contract", 1, 2);
		Form	f("Cheque", 150, 150);
		Form	g("Consent form", 50, 20);

		std::cout << d;
		a.signForm(d);
		b.signForm(f);
		c.signForm(g);
		std::cout << d;
		std::cout << f;
		std::cout << g;
		std::cout << "----------------------------------------------------\n";
		Form	h("Error", 0, 150);
		std::cout << h;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error on construction: " << e.what();
	}
}
