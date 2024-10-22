#include "PmergeMe.hpp"

// split in pairs, compare all pairs, grab biggest numbers and sort those simple way comparing to each other, 
// place first pair's lowest in front of lowest high number
// grab third pair's lowest number, compare with middle, then left or right, insert at right place, grab second, do same.
// grab 2nd unsorted pair (5th pair), then 1st (4th pair), then very last number that isnt paired, then last pair then 2nd to last etc until done.
// figure out what if the list is longer or shorter? do the same technique? test with uneven + even amounts...

// need 2 containers, not 1. vector and something else?

// first line display unsorted ints given as arguments, positive numbers only
// test with 3000 ints at least
// second line displays sorted ints
// third line shows time it took to store and sort using 1 container with its name
// fourth line shows time it took to store and sort using the other container with its name
int	main(int argc, char** argv)
{
	if (argc != 2)
	{
		std::cerr << "Wrong input, try ./PmergeMe \"1 3 2\"";
		return (EXIT_FAILURE);
	}
	
}
