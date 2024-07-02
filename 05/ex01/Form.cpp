/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/02 13:19:01 by cschabra      #+#    #+#                 */
/*   Updated: 2024/07/02 13:41:40 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

std::string	Form::getName() const
{
	return(_name);
}

void	Form::setIsSigned(const bool& isSigned)
{
	_isSigned = isSigned;
}

bool	Form::getIsSigned() const
{
	return(_isSigned);
}

int	Form::getGradeToSign() const
{
	return(_gradeToSign);
}

int	Form::getGradeToExecute() const
{
	return(_gradeToExecute);
}

void	Form::signForm()
{
//	it will print something like:
//	<bureaucrat> signed <form>
//	Otherwise, it will print something like:
//	<bureaucrat> couldn’t sign <form> because <reason>.
}

// Changes the form status to signed if the bureaucrat’s grade is high enough.
// Higher or equal to the required one. If the grade is too low, throw a Form::GradeTooLowException.
void	Form::beSigned(const Bureaucrat& bureaucrat)
{

}

const char*	Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high\n");
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low\n");
}

Form::Form(const std::string& name, const int gradeToSign, const int gradeToExecute) : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
}

Form::Form() : _name("No form name"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150)
{
	std::cout << "Default constructor called\n";
}

Form::Form(const Form& form) : _name(form.getName()), _isSigned(form.getIsSigned()), _gradeToSign(form.getGradeToSign()), _gradeToExecute(form.getGradeToExecute())
{
	std::cout << "Copy constructor called\n";
}

Form&	Form::operator=(const Form& form)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &form)
		this->setIsSigned(form.getIsSigned());
	return (*this);
}

std::ostream&	operator<<(std::ostream& co, const Form& form)
{
	if (form.getIsSigned() == true)
		co << form.getName() << " needs grade " << form.getGradeToSign() << " to sign, grade " << form.getGradeToExecute() << " to execute and HAS been signed.\n";
	else
		co << form.getName() << " needs grade " << form.getGradeToSign() << " to sign, grade " << form.getGradeToExecute() << " to execute and HAS NOT been signed.\n";
	return (co);
}

Form::~Form()
{
	std::cout << "Destructor called\n";
}
