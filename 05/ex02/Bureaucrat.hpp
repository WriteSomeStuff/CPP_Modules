/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/09 14:10:53 by cschabra      #+#    #+#                 */
/*   Updated: 2024/07/31 12:07:58 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class AForm;

class Bureaucrat
{
	private:
	const std::string	_name;
	int					_grade;

	public:
	void		setGrade(const int grade);
	std::string	getName() const;
	int			getGrade() const;
	void		incrementGrade();
	void		decrementGrade();
	void		signForm(AForm& form);
	void		executeForm(AForm const & form);

	class	GradeTooHighException : public std::exception
	{
		public:
		const char* what() const throw();
	};

	class	GradeTooLowException : public std::exception
	{
		public:
		const char* what() const throw();
	};

	Bureaucrat();
	Bureaucrat(const Bureaucrat& bureaucrat);
	Bureaucrat(const std::string& name, const int grade);
	Bureaucrat&	operator=(const Bureaucrat& bureaucrat);
	~Bureaucrat();
};

std::ostream&	operator<<(std::ostream& co, const Bureaucrat& bureaucrat);

#endif
