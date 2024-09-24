#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <array>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <iostream>
#include <iterator>
#include <algorithm>

template<typename T>
bool	easyfind(T& t, int find)
{
	typename T::iterator itr;
	itr = std::find(t.begin(), t.end(), find);
	if (itr != t.end())
		return (true);
	return (false);
}

#endif
