/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/09 14:11:46 by cschabra      #+#    #+#                 */
/*   Updated: 2024/05/10 12:47:11 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	Bureaucrat::setGrade(int grade)
{
	_grade = grade;
}

int	Bureaucrat::getGrade()
{
	return (_grade);
}

std::string	Bureaucrat::getName()
{
	return (_name);
}

Bureaucrat::Bureaucrat(const std::string name) : _name(name)
{
	
}

Bureaucrat::Bureaucrat(const Bureaucrat& bureaucrat)
{
	
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& bureaucrat)
{

}

// Is it cheap or expensive to copy a class from Bureaucrat? Should I pass by reference or value here?
std::ostream&	operator<<(std::ostream& co, const Bureaucrat& bureaucrat)
{
	
}

Bureaucrat::~Bureaucrat()
{

}
