/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/02 13:18:13 by cschabra      #+#    #+#                 */
/*   Updated: 2024/07/02 13:34:08 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class	Form
{
	private:
	const std::string	_name;
	bool				_isSigned;
	const int			_gradeToSign;
	const int			_gradeToExecute;

	public:
	std::string	getName() const;
	bool		getIsSigned() const;
	void		setIsSigned(const bool& isSigned);
	int			getGradeToSign() const;
	int			getGradeToExecute() const;
	void		signForm();
	void		beSigned(const Bureaucrat& bureaucrat);

	class	GradeTooHighException : public std::exception
	{
		public:
		const char*	what() const throw();	
	};

	class	GradeTooLowException : public std::exception
	{
		public:
		const char*	what() const throw();	
	};

	Form();
	Form(const Form &form);
	Form(const std::string& name, const int gradeToSign, const int gradeToExecute);
	Form& operator=(const Form& form);
	~Form();
};

std::ostream&	operator<<(std::ostream& co, const Form& form);

#endif
