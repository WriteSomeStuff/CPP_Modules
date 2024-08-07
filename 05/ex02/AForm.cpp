/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/02 13:19:01 by cschabra      #+#    #+#                 */
/*   Updated: 2024/07/31 11:38:59 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

std::string	AForm::getName() const
{
	return(_name);
}

void	AForm::setIsSigned(const bool& isSigned)
{
	_isSigned = isSigned;
}

bool	AForm::getIsSigned() const
{
	return(_isSigned);
}

int	AForm::getGradeToSign() const
{
	return(_gradeToSign);
}

int	AForm::getGradeToExecute() const
{
	return(_gradeToExecute);
}

// Changes the Aform status to signed if the bureaucrat’s grade is high enough.
// Higher or equal to the required one. If the grade is too low, throw a AForm::GradeTooLowException.
void	AForm::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > this->getGradeToSign())
		throw Bureaucrat::GradeTooLowException();
	this->setIsSigned(true);
}

void	AForm::execute(Bureaucrat const & executor) const
{
	if (this->getIsSigned())
	{
		if (executor.getGrade() > this->_gradeToExecute)
			throw Bureaucrat::GradeTooLowException();
		this->beExecuted();
	}
	else
		throw NotSigned();
}

const char*	AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high\n");
}

const char*	AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low\n");
}

const char*	AForm::NotSigned::what() const throw()
{
	return ("Form hasn't been signed yet\n");
}

AForm::AForm(const std::string& name, const int gradeToSign, const int gradeToExecute) : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (this->getGradeToExecute() < 1 || this->getGradeToSign() < 1)
		throw GradeTooHighException();
	if (this->getGradeToExecute() > 150 || this->getGradeToSign() > 150)
		throw GradeTooLowException();
}

AForm::AForm() : _name("No Aform name"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150)
{
	std::cout << "Default constructor called\n";
}

AForm::AForm(const AForm& form) : _name(form.getName()), _isSigned(form.getIsSigned()), _gradeToSign(form.getGradeToSign()), _gradeToExecute(form.getGradeToExecute())
{
	std::cout << "Copy constructor called\n";
}

AForm&	AForm::operator=(const AForm& form)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &form)
		this->setIsSigned(form.getIsSigned());
	return (*this);
}

std::ostream&	operator<<(std::ostream& co, const AForm& form)
{
	if (form.getIsSigned() == true)
		co << form.getName() << " needs grade " << form.getGradeToSign() << " to sign, grade " << form.getGradeToExecute() << " to execute and HAS been signed.\n";
	else
		co << form.getName() << " needs grade " << form.getGradeToSign() << " to sign, grade " << form.getGradeToExecute() << " to execute and HAS NOT been signed.\n";
	return (co);
}

AForm::~AForm()
{
	// std::cout << "Destructor called\n";
}
