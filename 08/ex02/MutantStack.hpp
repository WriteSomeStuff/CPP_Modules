#ifndef SPAN_HPP
# define SPAN_HPP

#include <stack>
#include <iostream>

template <class T>
class MutantStack : std::stack<T>
{
	private:

	public:


	MutantStack() = default;
	MutantStack(const MutantStack& mutant) = delete;
	MutantStack& operator=(const MutantStack& span) = delete;
	~MutantStack() = default;

};

#endif
