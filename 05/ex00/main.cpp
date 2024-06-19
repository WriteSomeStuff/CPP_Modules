#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat	a("Lillia", 1);
	Bureaucrat	b("Smolder", 150);
	Bureaucrat	c("Gnar", 66);

	std::cout << a;
	std::cout << b;
	std::cout << c;

	Bureaucrat	d("Warwick", 0);
	Bureaucrat	e("Nami", -1);
	Bureaucrat	f("Ahri", 157);

	a.incrementGrade();
	std::cout << a;
	a.decrementGrade();
	std::cout << a;
	b.decrementGrade();
	std::cout << b;
	b.incrementGrade();
	std::cout << b;
	c.incrementGrade();
	std::cout << c;
	c.decrementGrade();
	std::cout << c;
}
