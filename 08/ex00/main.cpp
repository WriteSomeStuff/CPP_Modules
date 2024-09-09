#include "easyfind.hpp"

int	main(void)
{
	std::array<int, 5> arr = {1, 2, 3, 4, 5};
	std::vector<int> vec = {6, 7, 8, 9, 10};
	std::deque<int> deq = {11, 12, 13, 14, 15};
	std::forward_list<int> flist = {16, 17, 18, 19, 20};
	std::list<int> list = {21, 22, 23, 24, 25};

	if (easyfind(arr, 5))
		std::cout << "Array: Found number in container!\n";
	else
		std::cout << "Array: Number not found in container.\n";
	if (easyfind(vec, 8))
		std::cout << "Vector: Found number in container!\n";
	else
		std::cout << "Vector: Number not found in container.\n";
	if (easyfind(deq, 13))
		std::cout << "Deque: Found number in container!\n";
	else
		std::cout << "Deque: Number not found in container.\n";
	if (easyfind(flist, 19))
		std::cout << "Forward list: Found number in container!\n";
	else
		std::cout << "Forward list: Number not found in container.\n";
	if (easyfind(list, 21))
		std::cout << "List: Found number in container!\n";
	else
		std::cout << "List: Number not found in container.\n";
}
