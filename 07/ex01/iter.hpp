#ifndef ITER_HPP
# define ITER_HPP

#include <stdlib.h>

template<typename T>
void iter(const T* address, size_t length, void (*fnc)(const T&))
{
	for (size_t i = 0; i < length; i++)
	{
		fnc(address[i]);
	}
}

template<typename T>
void iter(T* address, size_t length, void (*fnc)(T&))
{
	for (size_t i = 0; i < length; i++)
	{
		fnc(address[i]);
	}
}

#endif
