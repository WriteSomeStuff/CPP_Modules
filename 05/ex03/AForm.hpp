/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/02 13:18:13 by cschabra      #+#    #+#                 */
/*   Updated: 2024/07/02 13:34:08 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class	AForm
{
	private:
	const std::string	_name;
	bool				_isSigned;
	const int			_gradeToSign;
	const int			_gradeToExecute;
	virtual void		beExecuted() const = 0;

	public:
	std::string		getName() const;
	bool			getIsSigned() const;
	void			setIsSigned(const bool& isSigned);
	int				getGradeToSign() const;
	int				getGradeToExecute() const;
	void			beSigned(const Bureaucrat& bureaucrat);
	void			execute(Bureaucrat const & executor) const;

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

	class	NotSigned : public std::exception
	{
		public:
		const char*	what() const throw();	
	};

	AForm();
	AForm(const AForm &form);
	AForm(const std::string& name, const int gradeToSign, const int gradeToExecute);
	AForm& operator=(const AForm& form);
	virtual ~AForm();
};

std::ostream&	operator<<(std::ostream& co, const AForm& form);

#endif
