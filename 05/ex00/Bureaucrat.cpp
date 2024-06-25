/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/09 14:11:46 by cschabra      #+#    #+#                 */
/*   Updated: 2024/06/25 17:03:37 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// grade ranges from 1 (highest possible grade) to 150 (lowest possible grade).
// constructing, incrementing or decrementing out of range should throw an error.
void	Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
}

std::string	Bureaucrat::getName() const
{
	return (_name);
}

int	Bureaucrat::getGrade() const
{
	return (_grade);
}

void	Bureaucrat::incrementGrade()
{
	try
	{
		if (_grade == 1)
			throw GradeTooHighException();
		_grade--;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Increment error: " << e.what() << '\n';
	}
}

void	Bureaucrat::decrementGrade()
{
	try
	{
		if (_grade == 150)
			throw GradeTooLowException();
		_grade++;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Decrement error: " << e.what() << '\n';
	}
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat grade too high");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat grade too low");
}

Bureaucrat::Bureaucrat(const std::string& name, const int grade) : _name(name)
{
	try
	{
		this->setGrade(grade);
	}
	catch (std::exception& e)
	{
		std::cerr << "Construct error: " << e.what() << '\n';
	}
}

Bureaucrat::Bureaucrat() : _name("No name"), _grade(150)
{
	std::cout << "Default constructor called\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat& bureaucrat)
{
	std::cout << "Copy constructor called\n";
	*this = bureaucrat;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& bureaucrat)
{
	std::cout << "Copy assignment operator called\n";

	if (this != &bureaucrat)
		this->setGrade(bureaucrat.getGrade());
	return (*this);
}

std::ostream&	operator<<(std::ostream& co, const Bureaucrat& bureaucrat)
{
	co << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".\n";
	return (co);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor called\n";
}
