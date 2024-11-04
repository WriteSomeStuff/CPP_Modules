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
#include <iterator>
#include <algorithm>

unsigned long long	jacobsthal(int n);
void				mergeSortVec(std::vector<int>& higher, std::vector<int>& lower, int left, int right);
void				mergeSortList(std::list<int>& higher, std::list<int>& lower);

template<typename Container>
void	findAndInsert(Container& higher, int lower)
{
	auto it = std::lower_bound(higher.begin(), higher.end(), lower);
	higher.insert(it, lower);
}

template<typename Container>
void	mergeInsertion(Container& higher, Container& lower)
{
	int	lastPlaced = 0;
	int	current = 0;
	int	next = 3;

	higher.insert(higher.begin(), lower.front());
	while (static_cast<unsigned long>(current) < lower.size())
	{
		current = jacobsthal(next) - 1;
		for (int i = std::min<int>(current, lower.size() - 1); i > lastPlaced; i--)
		{
			auto it = std::next(lower.begin(), i);
			findAndInsert(higher, *it);
		}
		lastPlaced = current;
		next++;
	}
}

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
