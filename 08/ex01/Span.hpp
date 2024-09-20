#ifndef SPAN_HPP
# define SPAN_HPP

#include <array>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <iostream>

class Span
{
	private:
	std::vector<int> _vec;
	unsigned int	_maxSize;
	unsigned int	_currentSize;

	public:
	void			addNumber(const int& n);
	void			fillVec();
	int				shortestSpan();
	int				longestSpan();
	unsigned int&	getMaxSize();
	unsigned int&	getCurrentSize();


	Span();
	Span(const unsigned int& n);
	Span(const Span& span);
	Span& operator=(const Span& span);
	~Span();

};

#endif
