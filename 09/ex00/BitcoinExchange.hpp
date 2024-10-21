#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <map>
#include <string>
#include <fstream>

class BitcoinExchange
{
	private:
	std::map<std::string, double>	_map;

	public:
	std::map<std::string, double>::const_iterator	getIterator(const std::string& date) const;

	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange& bitcoinExchange);
	BitcoinExchange& operator=(const BitcoinExchange& bitcoinExchange);
	~BitcoinExchange();
};

void	checkForValidDate(const std::string& str);

#endif
