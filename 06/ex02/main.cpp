#include "Base.hpp"
#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void	identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		std::cout << "A &\n";
		(void)a;
	}
	catch (std::bad_cast ex)
	{
		std::cerr << ex.what() << '\n';
	}
	try
	{
		B& b = dynamic_cast<B&>(p);
		std::cout << "B &\n";
		(void)b;
	}
	catch (std::bad_cast ex)
	{
		std::cerr << ex.what() << '\n';
	}
	try
	{
		C& c = dynamic_cast<C&>(p);
		std::cout << "C &\n";
		(void)c;
	}
	catch (std::bad_cast ex)
	{
		std::cerr << ex.what() << '\n';
	}
}

void	identify(Base* p)
{
	if (A* d_ptr = dynamic_cast<A*>(p))
	{
		std::cout << "A *\n";
	}
	if (B* d_ptr = dynamic_cast<B*>(p))
	{
		std::cout << "B *\n";
	}
	if (C* d_ptr = dynamic_cast<C*>(p))
	{
		std::cout << "C *\n";
	}
}

Base* generate(void)
{
	srand(time(0));
	int random = rand() % 3;

	if (random == 0)
	{
		return (new A());
	}
	if (random == 1)
	{
		return (new B());
	}
	return (new C());
}

int	main(void)
{
	Base *base = generate();
	Base &baseref = *base;

	identify(base);
	identify(baseref);
	delete (base);
}
