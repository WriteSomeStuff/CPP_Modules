#include "PmergeMe.hpp"

void mergeSortVec(std::vector<int>& higher, std::vector<int>& lower, int left, int right)
{
	if (left < right)
	{
		int	mid = left + (right - left) / 2;
		int	i = 0;
		int	j = mid + 1 - left;
		int	k = left;

		mergeSortVec(higher, lower, left, mid);
		mergeSortVec(higher, lower, mid + 1, right);

		std::vector<int>	tempHigh(higher.begin() + left, higher.begin() + right + 1);
		std::vector<int>	tempLow(lower.begin() + left, lower.begin() + right + 1);

		while (i <= mid - left && j <= right - left)
		{
			if (tempHigh[i] <= tempHigh[j])
			{
				higher[k] = tempHigh[i];
				lower[k] = tempLow[i];
				i++;
			}
			else
			{
				higher[k] = tempHigh[j];
				lower[k] = tempLow[j];
				j++;
			}
			k++;
		}
		while (i <= mid - left)
		{
			higher[k] = tempHigh[i];
			lower[k] = tempLow[i];
			i++;
			k++;
		}
		while (j <= right - left)
		{
			higher[k] = tempHigh[j];
			lower[k] = tempLow[j];
			j++;
			k++;
		}
	}
}

void mergeSortList(std::list<int>& higher, std::list<int>& lower)
{
	int		lastElement = 0;
	bool	replace = false;

	if (higher.size() < 2)
		return ;
	if (higher.size() < lower.size())
	{
		lastElement = lower.back();
		lower.pop_back();
		replace = true;
	}

	std::list<int>::iterator	midHigh = std::next(higher.begin(), higher.size() / 2);
	std::list<int>::iterator	midLow = std::next(lower.begin(), lower.size() / 2);
	std::list<int>				leftHigh(higher.begin(), midHigh);
	std::list<int>				rightHigh(midHigh, higher.end());
	std::list<int>				leftLow(lower.begin(), midLow);
	std::list<int>				rightLow(midLow, lower.end());

	mergeSortList(leftHigh, leftLow);
	mergeSortList(rightHigh, rightLow);
	higher.clear();
	lower.clear();

	std::list<int>::iterator	itHighLeft = leftHigh.begin();
	std::list<int>::iterator	itLowLeft = leftLow.begin();
	std::list<int>::iterator	itHighRight = rightHigh.begin();
	std::list<int>::iterator	itLowRight = rightLow.begin();

	while (itHighLeft != leftHigh.end() && itHighRight != rightHigh.end())
	{
		if (*itHighLeft <= *itHighRight)
		{
			higher.push_back(*itHighLeft);
			lower.push_back(*itLowLeft);
			itHighLeft++;
			itLowLeft++;
		}
		else
		{
			higher.push_back(*itHighRight);
			lower.push_back(*itLowRight);
			itHighRight++;
			itLowRight++;
		}
	}
	while (itHighLeft != leftHigh.end())
	{
		higher.push_back(*itHighLeft);
		lower.push_back(*itLowLeft);
		itHighLeft++;
		itLowLeft++;
	}
	while (itHighRight != rightHigh.end())
	{
		higher.push_back(*itHighRight);
		lower.push_back(*itLowRight);
		itHighRight++;
		itLowRight++;
	}
	if (replace)
		lower.push_back(lastElement);
}
