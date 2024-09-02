#include "Array.hpp"

int	main(void)
{
	Array<int>	arr(5);
	const Array<int>	arr2(5);

	try
	{
		for(unsigned int i = 0; i < 5; i++)
		{
			arr[i] = i;
		}
		for(unsigned int i = 0; i < 5; i++)
		{
			std::cout << arr[i] << '\n';
		}
		// for(unsigned int i = 0; i < 5; i++)
		// {
		// 	arr2[i] = i + 10;
		// }
		for(unsigned int i = 0; i < 5; i++)
		{
			std::cout << arr2[i] << '\n';
		}
		std::cout << "-----------------\n";
		// arr = arr2;
		for(unsigned int i = 0; i < 5; i++)
		{
			std::cout << arr[i] << '\n';
		}
		std::cout << "-----------------\n";
		Array<int>	arr3 = arr;
		for(unsigned int i = 0; i < 5; i++)
		{
			std::cout << arr3[i] << '\n';
		}
		std::cout << "-----------------\n";
		for(unsigned int i = 0; i < 5; i++)
		{
			arr3[i] = i;
		}
		for(unsigned int i = 0; i < 5; i++)
		{
			std::cout << "arr3: " << arr3[i] << '\n';
			std::cout << "arr: " << arr[i] << '\n';
		}
		std::cout << "-----------------\n";
		// for(unsigned int i = 0; i < 5; i++)
		// {
		// 	arr2[i] = i + 5;
		// }
		for(unsigned int i = 0; i < 5; i++)
		{
			std::cout << "arr2: " << arr2[i] << '\n';
			std::cout << "arr: " << arr[i] << '\n';
		}

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
