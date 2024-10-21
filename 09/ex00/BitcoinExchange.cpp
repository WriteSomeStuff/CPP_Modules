#include "BitcoinExchange.hpp"
#include <iostream>
#include <regex>

void	checkForValidDate(const std::string& str)
{
	int	year;
	int	month;
	int	day;

	std::regex	pattern(R"(^\d{4}-\d{2}-\d{2}$)");
	if (!std::regex_match(str, pattern))
		throw std::out_of_range("wrong pattern found");
	year = std::stoi(str.substr(0, 4));
	month = std::stoi(str.substr(5, 2));
	day = std::stoi(str.substr(8, 2));
	if (year < 1 || month < 1 || day < 1 || month > 12 || day > 31)
		throw std::out_of_range("invalid date");
}

std::map<std::string, double>::const_iterator	BitcoinExchange::getIterator(const std::string& date) const
{
	std::map<std::string, double>::const_iterator	it = _map.lower_bound(date);
	if (it == _map.begin() && it->first != date)
		throw std::out_of_range("");
	if (it->first != date)
		return (--it);
	return (it);
}

BitcoinExchange::BitcoinExchange()
{
	std::ifstream	srcFile;
	std::string		str;

	srcFile.open("data.csv", std::ios::in);
	if (srcFile.fail())
	{
		std::cerr << "Error: could not open file.\n";
		std::exit(1);
	}
	while (std::getline(srcFile, str))
	{
		if (str == "date,exchange_rate")
			continue ;
		size_t pos = str.find(',');
		if (pos == std::string::npos || pos != 10 || pos + 1 >= str.size())
		{
			std::cerr << "Error found in database.\n";
			exit(1);
		}
		try
		{
			double	value = std::stod(str.substr(pos + 1));
			if (value < 0)
				throw std::out_of_range("negative number found");
			std::string	date = str.substr(0, pos);
			checkForValidDate(date);
			_map[date] = value;
		}
		catch(const std::exception& e)
		{
			std::cerr << "Wrong value given, " << e.what() << '\n';
			exit(1);
		}
	}
	srcFile.close();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& bitcoinExchange) : _map(bitcoinExchange._map)
{
}

BitcoinExchange&	BitcoinExchange::operator=(const BitcoinExchange& bitcoinExchange)
{
	if (this != &bitcoinExchange)
		this->_map = bitcoinExchange._map;
	return (*this);
}

BitcoinExchange::~BitcoinExchange()
{
}
