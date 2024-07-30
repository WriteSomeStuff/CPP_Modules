/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/02 13:18:22 by cschabra      #+#    #+#                 */
/*   Updated: 2024/07/30 17:06:22 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main()
{
	try
	{
		Bureaucrat	a("Lillia", 1);
		Bureaucrat	b("Smolder", 150);
		Bureaucrat	c("Gnar", 66);

		PresidentialPardonForm	form1("Nami");
		RobotomyRequestForm		form2("Amumu");
		ShrubberyCreationForm	form3("Shyvana");

		b.signForm(form3);
		form3.execute(b);
		// a.signForm(form3);
		// form3.execute(a);

		std::cout << "----------------------------------------------------\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what();
	}
}
