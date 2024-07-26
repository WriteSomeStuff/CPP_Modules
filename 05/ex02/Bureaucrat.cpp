/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/09 14:11:46 by cschabra      #+#    #+#                 */
/*   Updated: 2024/07/02 13:18:51 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

// Grade ranges from 1 (highest possible grade) to 150 (lowest possible grade).
// Constructing, incrementing or decrementing out of range should throw an error.
void	Bureaucrat::setGrade(const int grade)
{
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

void	Bureaucrat::signForm(AForm& aform)
{
	try
	{
		aform.beSigned(*this);
		std::cout << this->getName() << " signed " << aform.getName() << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << this->getName() << " couldn't sign " << aform.getName() << " because " << e.what();
	}
}

void	Bureaucrat::incrementGrade()
{
	if (_grade == 1)
		throw GradeTooHighException();
	_grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (_grade == 150)
		throw GradeTooLowException();
	_grade++;
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
	if (grade < 0)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	this->setGrade(grade);
}

Bureaucrat::Bureaucrat() : _name("No name"), _grade(150)
{
	std::cout << "Default constructor called\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat& bureaucrat) : _name(bureaucrat.getName()), _grade(bureaucrat.getGrade())
{
	std::cout << "Copy constructor called\n";
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
	// std::cout << "Destructor called\n";
}
