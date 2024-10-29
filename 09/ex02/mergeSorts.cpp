#include "PmergeMe.hpp"
#include <algorithm>

void mergeSortVec(std::vector<int>& vec, int left, int right)
{
	if (left < right)
	{
		int mid = left + (right - left) / 2;
		mergeSortVec(vec, left, mid);
		mergeSortVec(vec, mid + 1, right);
		std::inplace_merge(vec.begin() + left, vec.begin() + mid + 1, vec.begin() + right + 1);
	}
}

void mergeSortList(std::list<int>& lst)
{
	if (lst.size() < 2)
	{
		return;
	}
	std::list<int>::iterator mid = std::next(lst.begin(), lst.size() / 2);
	std::list<int> left(lst.begin(), mid);
	std::list<int> right(mid, lst.end());
	mergeSortList(left);
	mergeSortList(right);
	lst.clear();
	lst.merge(left);
	lst.merge(right);
}
