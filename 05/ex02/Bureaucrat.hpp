/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/09 14:10:53 by cschabra      #+#    #+#                 */
/*   Updated: 2024/06/25 16:55:44 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class Form;

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
	void		signForm(Form& form);

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
	Bureaucrat(const Bureaucrat& Bureaucrat);
	Bureaucrat(const std::string& name, const int grade);
	Bureaucrat&	operator=(const Bureaucrat& Bureaucrat);
	~Bureaucrat();
};

std::ostream&	operator<<(std::ostream& co, const Bureaucrat& bureaucrat);

#endif
