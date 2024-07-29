/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/29 12:43:55 by cschabra      #+#    #+#                 */
/*   Updated: 2024/07/29 12:43:56 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

void	ShrubberyCreationForm::beExecuted() const
{
	// std::cout << 
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
 : _target(target), AForm("ShrubberyCreationForm", _gradeToSign, _gradeToExecute)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& form)
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& form)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
