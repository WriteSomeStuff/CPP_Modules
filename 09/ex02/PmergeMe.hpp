#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <vector>
#include <list>
#include <iostream>
#include <exception>
#include <cstring>
#include <cctype>
#include <sstream>
#include <climits>

unsigned long long	jacobsthal(int n);
void				mergeInsertionVec(std::vector<int>& higher, std::vector<int>& lower);
void				mergeInsertionList(std::list<int>& higher, std::list<int>& lower);
void				mergeSortVec(std::vector<int>& vec, int left, int right);
void				mergeSortList(std::list<int>& lst);

template <typename Container>
class PmergeMe
{
	private:
	Container	_higherNr;
	Container	_lowerNr;	

	public:
	Container&	getHigherNr()
	{
		return (_higherNr);
	}

	Container&	getLowerNr()
	{
		return (_lowerNr);
	}

	void	printSortedNumbers()
	{
		std::cout << "After: ";
		for (const int num : _higherNr)
		{
			std::cout << num << " ";
		}
		std::cout << '\n';
	}

	PmergeMe() = delete;

	PmergeMe(const std::string& input)
	{
		std::istringstream	ss(input);
		int	first = 0;
		int	second = 0;

		while (ss >> first)
		{
			if (ss >> second)
			{
				if (first > second)
				{
					_higherNr.push_back(first);
					_lowerNr.push_back(second);
				}
				else
				{
					_higherNr.push_back(second);
					_lowerNr.push_back(first);
				}
			}
			else
			{
				_lowerNr.push_back(first);
			}
		}
	}

	PmergeMe(const PmergeMe& pmerge) : _higherNr(pmerge._higherNr), _lowerNr(pmerge._lowerNr)
	{
	}

	PmergeMe&	operator=(const PmergeMe& pmerge)
	{
		if (this != &pmerge)
		{
			this->_higherNr = pmerge._higherNr;
			this->_lowerNr = pmerge._lowerNr;
		}
		return (*this);
	}

	~PmergeMe()
	{
	}
};

#endif
