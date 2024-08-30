#include "iter.hpp"
#include <iostream>
#include "iter.hpp"
#include <iostream>

class Test
{
	private:
	int	_i;

	public:
	Test() : _i(0)
	{
	}
	Test(int i): _i(i)
	{
	}
	int getInt() const
	{
		return (_i);
	}
};
std::ostream& operator<<(std::ostream&o, const Test& t)
{
	o << t.getInt();
	return (o);
}

template<typename T>
void printOutput(const T& n)
{
	std::cout << typeid(n).name() << ": " << n << '\n';
}

template<typename T>
void printOutput(T n)
{
	std::cout << typeid(n).name() << ": " << n << '\n';
}

int	main(void)
{
	int			array1[] = {1, 2, 3, 4, 5};
	float		array2[] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};
	Test		test1[5] = {4, 5, 6, 7, 8};
	const Test	test2[5];

	iter(array1, sizeof(array1) / sizeof(int), printOutput);
	iter(array2, sizeof(array2) / sizeof(float), printOutput);
	iter(test1, sizeof(array2) / sizeof(Test), printOutput);
	iter(test2, sizeof(array2) / sizeof(Test), printOutput);
}
