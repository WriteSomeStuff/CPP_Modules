#include "BitcoinExchange.hpp"
#include <iostream>

int	main(int argc, char** argv)
{
	if (argc != 2)
	{
		std::cerr << "Please try ./btc input.txt\n";
		return (1);
	}
	// parse database to access and find closest date (lower if not exact)
	// open input file, grab every line to try feed it into database checker
	// if worked, write results, if not throw right error. continue to next line.

}
