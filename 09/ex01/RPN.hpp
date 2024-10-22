#ifndef RPN_HPP
# define RPN_HPP

#include <stack>
#include <iostream>

class RPN
{
	private:
	std::stack<int>	_stack;
	std::string		_input;

	public:
	RPN();
	RPN(const std::string& str);
	RPN(const RPN& rpn);
	RPN& operator=(const RPN& rpn);
	~RPN();
};

#endif
