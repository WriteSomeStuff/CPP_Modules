/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/09 14:10:53 by cschabra      #+#    #+#                 */
/*   Updated: 2024/05/10 12:39:01 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat
{
	private:
	const std::string	_name;
	int					_grade;

	public:
	void		setGrade(int grade);
	int			getGrade() const;
	std::string	getName() const;
	void		incrementGrade();
	void		decrementGrade();

	Bureaucrat();
	Bureaucrat(const Bureaucrat& Bureaucrat);
	Bureaucrat(const std::string& name, const int grade);
	Bureaucrat&	operator=(const Bureaucrat& Bureaucrat);
	~Bureaucrat();

	class	GradeTooHighException : public std::out_of_range
	{
		public:
		GradeTooHighException();
	};

	class	GradeTooLowException : public std::out_of_range
	{
		public:
		GradeTooLowException();
	};
};

std::ostream&	operator<<(std::ostream& co, const Bureaucrat& bureaucrat);

#endif
