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

int	compareValues(const std::vector<int>& higher, int lower)
{
	// compare lower to the middle of higher, split in halves every time if lower or higher until found where belongs
	return (1); // return (index to place at);
}

void	mergeInsertionVec(std::vector<int>& higher, std::vector<int>& lower)
{
	int	lastPlaced = 0;
	int	current = 2;
	int	next = 3;
	higher.insert(higher.begin(), lower.front());
	std::cout << "Index to grab: " << jacobsthal(next) - 1 << '\n';
	while (1)
	{
		current = jacobsthal(next) - 1;
		lastPlaced = compareValues(higher, lower.at(current));
		// place value at found index
		if (jacobsthal(next) >= lower.size())
			break ;
	}
	// empty last elements until last inserted index
}

void	mergeInsertionList(std::list<int>& higher, std::list<int>& lower)
{
	higher.insert(higher.begin(), lower.front());

}
