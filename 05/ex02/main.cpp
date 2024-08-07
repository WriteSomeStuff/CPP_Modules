/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/02 13:18:22 by cschabra      #+#    #+#                 */
/*   Updated: 2024/07/31 12:39:59 by cschabra      ########   odam.nl         */
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
		Bureaucrat	b("Gnar", 66);
		Bureaucrat	c("Smolder", 150);

		ShrubberyCreationForm	form1("Skygarden");
		RobotomyRequestForm		form2("Amumu");
		PresidentialPardonForm	form3("Nami");

		a.signForm(form1);
		a.executeForm(form1);
		a.signForm(form2);
		a.executeForm(form2);
		a.executeForm(form2);
		a.signForm(form3);
		a.executeForm(form3);

		// b.signForm(form1);
		// form1.execute(b);
		// b.signForm(form2);
		// form2.execute(b);
		// b.signForm(form3);
		// form3.execute(b);
		
		// c.signForm(form1);
		// form1.execute(c);
		// c.signForm(form2);
		// form2.execute(c);
		// c.signForm(form3);
		// form3.execute(c);

		std::cout << "----------------------------------------------------\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what();
	}
}
