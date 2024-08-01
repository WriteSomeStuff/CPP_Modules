#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <string>

class ScalarConverter
{
	public:
	static void	convert(const std::string& str);
	ScalarConverter() = delete;
	ScalarConverter(const ScalarConverter& sc) = delete;
	ScalarConverter& operator=(const ScalarConverter& sc) = delete;
	~ScalarConverter() = delete;
};

#endif
