/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/29 12:43:50 by cschabra      #+#    #+#                 */
/*   Updated: 2024/07/30 17:29:07 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

void	RobotomyRequestForm::beExecuted() const
{
	static	int i = 0;

	if (i % 2)
		std::cout << "*Insert drilling noises* " << _target << " has been robotomized!\n";
	else
		std::cout << "*Insert drilling noises* " << _target << " couldn't be robotomized!\n";
	i++;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
 : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}
