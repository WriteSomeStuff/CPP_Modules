#include "RPN.hpp"

RPN::RPN()
{
	std::cerr << "Please construct with a string to get output.\n";
}

RPN::RPN(const std::string& str) : _input(str)
{
	int			nr1;
	int			nr2;

	for (size_t i = 0; i < str.size(); i++)
	{
		if (isdigit(str[i]))
		{
			int	number = str[i] - '0';
			_stack.push(number);
		}
		else
		{
			if (_stack.size() < 2)
			{
				std::cerr << "Wrong amount/order of numbers and operators\n";
				exit(1);
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
				nr1 /= nr2;
			_stack.push(nr1);
		}
	}
	int	result = _stack.top();
	_stack.pop();
	if (_stack.size() != 0)
	{
		std::cerr << "Wrong amount of operators/numbers, stack not empty\n";
		exit(1);
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
