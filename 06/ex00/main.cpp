#include "ScalarConverter.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Wrong amount of arguments, use ./convert <your input here>. If using special characters like * use quotes like '*'.\n";
		return(EXIT_FAILURE);
	}
	ScalarConverter::convert(argv[1]);
}
