#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void swap(T& first, T& second)
{
	T temp;

	temp = first;
	first = second;
	second = temp;
}

template<typename T>
T& min(T& first, T& second)
{
	if (first < second)
		return (first);
	return (second);
}

template<typename T>
T& max(T& first, T& second)
{
	if (first > second)
		return (first);
	return (second);
}

#endif
