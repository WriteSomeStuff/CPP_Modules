#include "PmergeMe.hpp"

int	main(int argc, char** argv)
{
	if (argc < 2)
	{
		std::cerr << "Wrong input, try ./PmergeMe 1 3 2\n";
		return (EXIT_FAILURE);
	}
	PmergeMe merge(argv);
}
