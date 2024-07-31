/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/31 11:59:28 by cschabra      #+#    #+#                 */
/*   Updated: 2024/07/31 12:34:28 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	private:

	public:
	AForm* makeForm(const std::string& name, const std::string& target);

	class	NoFormFoundException : public std::exception
	{
		public:
		const char*	what() const throw();	
	};

	Intern();
	Intern(const Intern& intern) = delete;
	Intern&	operator=(const Intern& intern) = delete;
	~Intern();
};

#endif
