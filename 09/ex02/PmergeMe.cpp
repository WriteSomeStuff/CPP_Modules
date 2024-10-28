#include "PmergeMe.hpp"

// split in pairs, compare all pairs, grab biggest numbers and sort those merge sort way, 
// place first pair's lowest in front of lowest high number
// use the jacobsthal sequence to grab lower number of pairs

// use vector and list for inserting better

// first line display unsorted ints given as arguments, positive numbers only
// test with 3000 ints at least
// second line displays sorted ints
// third line shows time it took to store and sort using 1 container with its name
// fourth line shows time it took to store and sort using the other container with its name
PmergeMe::PmergeMe()
{
	std::cerr << "Please create a PmergeMe with a string\n";
	std::exit(EXIT_FAILURE);
}

PmergeMe::PmergeMe(const std::string& input)
{
	std::cout << "Before sorting: " << input << '\n';
	// while (input[i])
	// {
	// 	try
	// 	{
	// 		if (_input.())
	// 		_input.push_back(std::stoi(input[i]));
	// 	}
	// 	catch(const std::exception& e)
	// 	{
	// 		std::cerr << "Error found in: " << e.what() << '\n';
	// 		exit(1);
	// 	}
	// 	std::cout << str << '\n';
	// }
	// grab time for vector
	// do math stuff
	// grab time to calculate how long sorting took
	// print unsorted stuff argv[1]
	// print sorted stuff vector
	// 
}

PmergeMe::PmergeMe(const PmergeMe& pmerge) : _higherNrVec(pmerge._higherNrVec), _lowerNrVec(pmerge._lowerNrVec),
_higherNrList(pmerge._higherNrList), _lowerNrList(pmerge._lowerNrList)
{
}

PmergeMe&	PmergeMe::operator=(const PmergeMe& pmerge)
{
	if (this != &pmerge)
	{
		this->_higherNrVec = pmerge._higherNrVec;
		this->_lowerNrVec = pmerge._lowerNrVec;
		this->_higherNrList = pmerge._higherNrList;
		this->_lowerNrList = pmerge._lowerNrList;
	}
	return (*this);
}

PmergeMe::~PmergeMe()
{
}
