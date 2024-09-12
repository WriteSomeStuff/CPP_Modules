#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <array>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <iostream>

template<typename T>
bool	easyfind(T& t, int find)
{
	for (const int& i : t)
	{
		if (i == find)
			return (true);
	}
	return (false);
}

#endif
