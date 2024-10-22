#include "RPN.hpp"
#include <cctype>

int	main(int argc, char** argv)
{
	std::string	str;

	if (argc != 2)
	{
		std::cerr << "Wrong input, try ./PRN \"1 1 +\"";
		return (EXIT_FAILURE);
	}
	for (size_t i = 0; i < std::strlen(argv[1]); i++)
	{
		if (argv[1][i] != ' ' && !std::isdigit(argv[1][i]) && argv[1][i] != '+' && argv[1][i] != '-' && argv[1][i] != '/' && argv[1][i] != '*')
		{
			std::cerr << "Invalid input, only numbers, spaces and + - / * allowed\n";
			return (EXIT_FAILURE);
		}
		if (argv[1][i] != ' ')
			str.push_back(argv[1][i]);
	}
	if (str.size() < 3)
	{
		std::cerr << "Wrong amount, can't calculate anything here\n";
		return (EXIT_FAILURE);
	}
	RPN	rpn(str);
}
