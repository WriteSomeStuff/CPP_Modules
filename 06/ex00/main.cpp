#include "ScalarConverter.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Wrong amount of arguments, use ./convert <your input here>\n";
	}
	ScalarConverter::convert(argv[1]);
}
