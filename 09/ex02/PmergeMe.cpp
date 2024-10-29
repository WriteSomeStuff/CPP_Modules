#include "PmergeMe.hpp"

// place first pair's lowest in front of lowest high number
// use the jacobsthal sequence to grab lower number of pairs

// use vector and list for inserting better

// first line display unsorted ints given as arguments, positive numbers only
// test with 3000 ints at least
// second line displays sorted ints
// third line shows time it took to store and sort using 1 container with its name
// fourth line shows time it took to store and sort using the other container with its name

unsigned long long jacobsthal(int n)
{
	if (n == 0) 
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	return (jacobsthal(n - 1) + (2 * jacobsthal(n - 2)));
}

void	mergeInsertionVec(std::vector<int>& higher, std::vector<int>& lower)
{
	std::cout << jacobsthal(4) << '\n';
	// do the stuff here
}

void	mergeInsertionList(std::list<int>& higher, std::list<int>& lower)
{

}
