#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>
#include <cstdlib>

void	readInputFile(char* inputFile)
{
	std::ifstream	srcFile;
	std::string		str;

	srcFile.open(inputFile, std::ios::in);
	if (srcFile.fail())
	{
		std::cerr << "Error: could not open file.\n";
		std::exit(1);
	}
	while (std::getline(srcFile, str))
	{
		std::cout << str << '\n';
		// use every line to try feed it into database checker
	}
	srcFile.close();
}

int	main(int argc, char** argv)
{
	if (argc != 2)
	{
		std::cerr << "Please try ./btc input.txt\n";
		return (1);
	}
	readInputFile(argv[1]);
	// parse database to access and find closest date (lower if not exact)
	// if worked, write results, if not throw right error. continue to next line.

}
