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

class Bureaucrat
{
	protected:
	const std::string	_name;
	int					_grade;

	public:

	void		setGrade(int grade);
	int			getGrade();
	std::string	getName();
	void		incrementGrade();
	void		decrementGrade();

	Bureaucrat(const std::string name);
	Bureaucrat(const Bureaucrat& Bureaucrat);
	Bureaucrat&	operator=(const Bureaucrat& Bureaucrat);
	virtual	~Bureaucrat();

};

std::ostream&	operator<<(std::ostream& co, const Bureaucrat& bureaucrat);

#endif
