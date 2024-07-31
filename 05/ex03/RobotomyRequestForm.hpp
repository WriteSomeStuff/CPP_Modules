/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.hpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/29 12:43:53 by cschabra      #+#    #+#                 */
/*   Updated: 2024/07/30 16:13:48 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class	RobotomyRequestForm : public virtual AForm
{
	private:
	const std::string	_target;
	virtual void		beExecuted() const;

	public:
	RobotomyRequestForm() = delete;
	RobotomyRequestForm(const std::string& target);
	RobotomyRequestForm(const RobotomyRequestForm& form) = delete;
	RobotomyRequestForm& operator=(const RobotomyRequestForm& form) = delete;
	~RobotomyRequestForm();
};

#endif
