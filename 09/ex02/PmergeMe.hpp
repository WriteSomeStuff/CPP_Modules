#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <vector>
#include <list>
#include <iostream>
#include <stdexcept>

class PmergeMe
{
	private:
	std::vector<int>	_input;
	std::vector<int>	_higherNrVec;
	std::vector<int>	_lowerNrVec;
	std::list<int>	_higherNrList;	
	std::list<int>	_lowerNrList;	

	public:
	PmergeMe();
	PmergeMe(char** input);
	PmergeMe(const PmergeMe& pmerge);
	PmergeMe& operator=(const PmergeMe& pmerge);
	~PmergeMe();
};

#endif
