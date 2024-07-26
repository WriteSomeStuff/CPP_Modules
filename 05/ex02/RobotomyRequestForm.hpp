#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Bureaucrat.hpp"

class	RobotomyRequestForm : public virtual Bureaucrat
{
	private:
	const int	_gradeToSign = 72;
	const int	_gradeToExecute = 45;

	public:
	void	execute(Bureaucrat const & executor) const;
	RobotomyRequestForm() = delete;
	RobotomyRequestForm(const std::string& target);
	RobotomyRequestForm(const RobotomyRequestForm& form);
	RobotomyRequestForm& operator=(const RobotomyRequestForm& form);
	~RobotomyRequestForm();
};

#endif
