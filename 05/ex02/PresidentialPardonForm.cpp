/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/29 12:43:45 by cschabra      #+#    #+#                 */
/*   Updated: 2024/07/29 12:43:46 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

void	PresidentialPardonForm::beExecuted() const
{
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox.\n";
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
 : _target(target), AForm("PresidentialPardonForm", _gradeToSign, _gradeToExecute)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& form)
{

}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& form)
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{
}
