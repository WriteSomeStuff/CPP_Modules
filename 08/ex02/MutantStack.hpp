#ifndef SPAN_HPP
# define SPAN_HPP

#include <stack>
#include <iostream>

template <typename T, typename Container = std::deque<T>>
class MutantStack : public std::stack<T, Container>
{
	private:

	public:
	typedef typename Container::iterator		iterator;
	typedef typename Container::const_iterator	const_iterator;

	iterator	begin()
	{
		return this->c.begin();
	}
	iterator	end()
	{
		return this->c.end();
	}
	const_iterator	begin() const
	{
		return this->c.begin();
	}
	const_iterator	end() const
	{
		return this->c.end();
	}

	MutantStack()
	{
	}
	MutantStack(const MutantStack& mutant)
	{
		*this = mutant;
	}
	MutantStack& operator=(const MutantStack& mutant)
	{
		if (this != &mutant)
		{
			this->c = mutant->c;
		}
		return (*this);
	}
	~MutantStack()
	{
	};
};

#endif
