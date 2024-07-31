/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.hpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/29 12:43:48 by cschabra      #+#    #+#                 */
/*   Updated: 2024/07/30 16:12:59 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class	PresidentialPardonForm : public virtual AForm
{
	private:
	const std::string	_target;
	virtual void		beExecuted() const;

	public:
	PresidentialPardonForm() = delete;
	PresidentialPardonForm(const std::string& target);
	PresidentialPardonForm(const PresidentialPardonForm& form) = delete;
	PresidentialPardonForm& operator=(const PresidentialPardonForm& form) = delete;
	~PresidentialPardonForm();
};

#endif
