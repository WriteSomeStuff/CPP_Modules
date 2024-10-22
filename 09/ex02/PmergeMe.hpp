#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <vector>
#include <iostream>

class PmergeMe
{
	private:

	public:
	PmergeMe();
	PmergeMe(const PmergeMe& pmerge);
	PmergeMe& operator=(const PmergeMe& pmerge);
	~PmergeMe();
};

#endif
