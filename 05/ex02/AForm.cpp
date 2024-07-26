/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/02 13:19:01 by cschabra      #+#    #+#                 */
/*   Updated: 2024/07/02 13:41:40 by cschabra      ########   odam.nl         */
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
		throw GradeTooLowException();
	this->setIsSigned(true);
}

const char*	AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high\n");
}

const char*	AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low\n");
}

AForm::AForm(const std::string& name, const int gradeToSign, const int gradeToExecute) : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (this->getGradeToExecute() < 0 || this->getGradeToSign() < 0)
		throw GradeTooHighException();
	if (this->getGradeToExecute() > 150 || this->getGradeToSign() > 150)
		throw GradeTooLowException();
}

AForm::AForm() : _name("No Aform name"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150)
{
	std::cout << "Default constructor called\n";
}

AForm::AForm(const AForm& aform) : _name(aform.getName()), _isSigned(aform.getIsSigned()), _gradeToSign(aform.getGradeToSign()), _gradeToExecute(aform.getGradeToExecute())
{
	std::cout << "Copy constructor called\n";
}

AForm&	AForm::operator=(const AForm& aform)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &aform)
		this->setIsSigned(aform.getIsSigned());
	return (*this);
}

std::ostream&	operator<<(std::ostream& co, const AForm& aform)
{
	if (aform.getIsSigned() == true)
		co << aform.getName() << " needs grade " << aform.getGradeToSign() << " to sign, grade " << aform.getGradeToExecute() << " to execute and HAS been signed.\n";
	else
		co << aform.getName() << " needs grade " << aform.getGradeToSign() << " to sign, grade " << aform.getGradeToExecute() << " to execute and HAS NOT been signed.\n";
	return (co);
}

AForm::~AForm()
{
	// std::cout << "Destructor called\n";
}
