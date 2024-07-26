#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Bureaucrat.hpp"

class	ShrubberyCreationForm : public virtual Bureaucrat
{
	private:
	const int	_gradeToSign = 145;
	const int	_gradeToExecute = 137;

	public:
	void	execute(Bureaucrat const & executor) const;
	ShrubberyCreationForm() = delete;
	ShrubberyCreationForm(const std::string& target);
	ShrubberyCreationForm(const ShrubberyCreationForm& form);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& form);
	~ShrubberyCreationForm();
};

#endif
