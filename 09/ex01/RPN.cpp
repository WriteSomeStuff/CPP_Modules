#include "RPN.hpp"
#include <cstdlib>

RPN::RPN()
{
	std::cerr << "Please construct with a string to get output.\n";
}

RPN::RPN(const std::string& str) : _input(str)
{
	float	nr1;
	float	nr2;

	for (size_t i = 0; i < str.size(); i++)
	{
		if (std::isdigit(str[i]))
		{
			float	number = str[i] - '0';
			_stack.push(number);
		}
		else
		{
			if (_stack.size() < 2)
			{
				std::cerr << "Wrong amount/order of numbers and operators\n";
				std::exit(EXIT_FAILURE);
			}
			nr2 = _stack.top();
			_stack.pop();
			nr1 = _stack.top();
			_stack.pop();
			if (str[i] == '+')
				nr1 += nr2;
			if (str[i] == '-')
				nr1 -= nr2;
			if (str[i] == '*')
				nr1 *= nr2;
			if (str[i] == '/')
			{
				if (nr2 == 0)
				{
					std::cerr << "Can't divide by 0\n";
					std::exit(EXIT_FAILURE);
				}
				nr1 /= nr2;
			}
			_stack.push(nr1);
		}
	}
	float result = _stack.top();
	_stack.pop();
	if (_stack.size() != 0)
	{
		std::cerr << "Wrong amount of operators/numbers, stack not empty\n";
		std::exit(EXIT_FAILURE);
	}
	std::cout << result << '\n';
}

RPN::RPN(const RPN& rpn) : _stack(rpn._stack), _input(rpn._input)
{
}

RPN&	RPN::operator=(const RPN& rpn)
{
	if (this != &rpn)
	{
		this->_stack = rpn._stack;
		this->_input = rpn._input;
	}
	return (*this);
}

RPN::~RPN()
{
}
