#include "PresidentialPardonForm.hpp"

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->_gradeToExecute)
		throw Bureaucrat::GradeTooLowException();
	std::cout << executor.getName() << " has been pardoned by Zaphod Beeblebrox.\n";
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& form)
{

}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& form)
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{
}
