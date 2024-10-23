#include "BitcoinExchange.hpp"
#include <iostream>

void	findExchangeRate(const std::string& str, const BitcoinExchange& database)
{
	double		value;
	std::string	date;

	date = str.substr(0, 10);
	checkForValidDate(date);
	if (str.substr(10, 3) != " | ")
		throw std::invalid_argument("");
	value = std::stod(str.substr(13));
	if (value < 0 || value > 2147483647.0)
		throw std::out_of_range("");
	std::map<std::string, double>::const_iterator it = database.getIterator(date);
	std::cout << date << " => " << value << " = " << value * it->second << '\n';
}

void	readInputFile(const char* inputFile, const BitcoinExchange& database)
{
	std::ifstream	srcFile;
	std::string		str;

	srcFile.open(inputFile, std::ios::in);
	if (srcFile.fail())
	{
		std::cerr << "Error: could not open file.\n";
		std::exit(EXIT_FAILURE);
	}
	while (std::getline(srcFile, str))
	{
		if (str == "date | value")
			continue ;
		try
		{
			findExchangeRate(str, database);
		}
		catch(const std::exception& e)
		{
			std::cerr << "Error: bad input => " << str << '\n';
		}
	}
	srcFile.close();
}

int	main(int argc, char** argv)
{
	BitcoinExchange database;

	if (argc != 2)
	{
		std::cerr << "Please try ./btc input.txt\n";
		return (1);
	}
	readInputFile(argv[1], database);
}
