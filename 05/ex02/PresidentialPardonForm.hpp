#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Bureaucrat.hpp"

class	PresidentialPardonForm : public virtual Bureaucrat
{
	private:
	const int	_gradeToSign = 25;
	const int	_gradeToExecute = 5;

	public:
	void	execute(Bureaucrat const & executor) const;
	PresidentialPardonForm() = delete;
	PresidentialPardonForm(const std::string& target);
	PresidentialPardonForm(const PresidentialPardonForm& form);
	PresidentialPardonForm& operator=(const PresidentialPardonForm& form);
	~PresidentialPardonForm();
};

#endif
