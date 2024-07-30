/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.hpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/29 12:43:58 by cschabra      #+#    #+#                 */
/*   Updated: 2024/07/30 16:14:43 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <fstream>
#include "AForm.hpp"

class	ShrubberyCreationForm : public virtual AForm
{
	private:
	const std::string	_target;
	virtual void		beExecuted() const;

	public:
	ShrubberyCreationForm() = delete;
	ShrubberyCreationForm(const std::string& target);
	ShrubberyCreationForm(const ShrubberyCreationForm& form) = delete;
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& form) = delete;
	~ShrubberyCreationForm();
};

#endif
