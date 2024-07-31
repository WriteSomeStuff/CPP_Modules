/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/31 11:59:25 by cschabra      #+#    #+#                 */
/*   Updated: 2024/07/31 12:35:34 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

AForm*	Intern::makeForm(const std::string& name, const std::string& target)
{
	std::string allLevels[] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	AForm* form = nullptr;
	
	int	which = -1;
	for (int i = 0; i < 3; i++)
	{
		if (allLevels[i] == name)
		{
			which = i;
			break ;	
		}
	}
	switch (which)
	{
		case -1:
			throw NoFormFoundException();
			break ;
		case 0:
			form = new ShrubberyCreationForm(target);
			break ;
		case 1:
			form = new RobotomyRequestForm(target);
			break ;
		case 2:
			form = new PresidentialPardonForm(target);
			break ;
	}
	return (form);
}

const char*	Intern::NoFormFoundException::what() const throw()
{
	return ("Wrong form name!\n");
}

Intern::Intern()
{
}

Intern::~Intern()
{
}