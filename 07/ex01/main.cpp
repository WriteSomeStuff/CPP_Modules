#include "iter.hpp"
#include <iostream>

template<typename T>
void increase(T n)
{
	std::cout << typeid(n).name() << ": " << n + 1 << '\n';
}

int	main(void)
{
	int		array1[] = {1, 2, 3, 4, 5};
	float	array2[] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};

	iter(array1, sizeof(array1) / sizeof(int), &increase);
	iter(array2, sizeof(array2) / sizeof(float), &increase);
}
