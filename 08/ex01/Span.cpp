#include "Span.hpp"
#include <algorithm>

unsigned int&	Span::getMaxSize()
{
	return (_maxSize);
}

unsigned int&	Span::getCurrentSize()
{
	return (_currentSize);
}

void	Span::addNumber(const int& n)
{
	if (getCurrentSize() == getMaxSize())
		throw std::length_error("Max size has been reached");
	_currentSize++;
	_vec.push_back(n);
}

int		Span::shortestSpan()
{
	if (_currentSize <= 1)
		return (0);
	long int	shortest = UINT32_MAX;
	std::sort(_vec.begin(), _vec.end());
	for (unsigned int i = 1; i < _currentSize; i++)
	{
		long int diff = static_cast<long int>(_vec[i]) - static_cast<long int>(_vec[i - 1]);
		if (shortest > diff)
			shortest = diff;
	}
	if (shortest > INT32_MAX)
		throw std::out_of_range("Difference is too large, can't return as int!");
	return (static_cast<int>(shortest));
}

int		Span::longestSpan()
{
	if (_currentSize <= 1)
		return (0);
	int			highest = *std::max_element(_vec.begin(), _vec.end());
	int			lowest = *std::min_element(_vec.begin(), _vec.end());
	long int	diff = static_cast<long int>(highest) - static_cast<long int>(lowest);
	if (diff > INT32_MAX)
		throw std::out_of_range("Difference is too large, can't return as int!");
	return (highest - lowest);
}

Span::Span() : _maxSize(0), _currentSize(0)
{
}

Span::Span(const unsigned int& n) : _maxSize(n), _currentSize(0)
{
}

Span::Span(const Span& span) : _maxSize(span._maxSize), _currentSize(span._currentSize)
{
	this->_vec = span._vec;
}

Span& Span::operator=(const Span& span)
{
	if (this != &span)
	{
		this->_vec = span._vec;
		this->_maxSize = span._maxSize;
		this->_currentSize = span._currentSize;
	}
	return (*this);
}

Span::~Span()
{
}
