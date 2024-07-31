/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/02 13:18:22 by cschabra      #+#    #+#                 */
/*   Updated: 2024/07/31 12:37:58 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int	main()
{
	try
	{
		Intern newbie;
		Bureaucrat	a("Lillia", 1);

		AForm* form = newbie.makeForm("ShrubberyCreationForm", "Skygarden");
		a.signForm(*form);
		a.executeForm(*form);
		delete form;

		form = newbie.makeForm("PresidentialPardonForm", "Cheyenne");
		a.signForm(*form);
		a.executeForm(*form);
		delete form;

		form = newbie.makeForm("RobotomyRequestForm", "Terminator");
		a.signForm(*form);
		a.executeForm(*form);
		delete form;

		form = newbie.makeForm("NoExist", "Terminator");
		a.signForm(*form);
		a.executeForm(*form);
		delete form;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
}
