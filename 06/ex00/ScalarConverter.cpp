#include "ScalarConverter.hpp"
#include <iostream>
#include <limits>
#include <cmath>

enum LiteralType
{
	FLOAT,
	DOUBLE,
	CHAR,
	INT,
	INVALID
};

static void	checkForValidString(const std::string& str)
{
	std::string allLevels[] = {"nan", "nanf", "-inf", "-inff", "+inf", "+inff", "inf", "inff"};
	
	int	which = -1;
	for (int i = 0; i < 8; i++)
	{
		if (allLevels[i] == str)
		{
			which = i;
			std::cout << "char: impossible\n";
			std::cout << "int: impossible\n";
			break ;	
		}
	}
	if (which == 1)
		which = 0;
	if (which == 2 || which == 3)
		which = 1;
	if (which > 3)
		which = 2;

	switch (which)
	{
		case -1:
		{
			return ;
		}
		case 0:
		{
			float nanf = std::numeric_limits<float>::quiet_NaN();
			double nan = std::numeric_limits<double>::quiet_NaN();

			std::cout << "float: " << nanf << "f\n";
			std::cout << "double: " << nan << '\n';
			exit(EXIT_SUCCESS);
		}
		case 1:
		{
			float negInfFloat = -std::numeric_limits<float>::infinity();
			double negInfDouble = -std::numeric_limits<double>::infinity();

			std::cout << "float: " << negInfFloat << "f\n";
			std::cout << "double: " << negInfDouble << '\n';
			exit(EXIT_SUCCESS);
		}
		case 2:
		{
			float posInfFloat = std::numeric_limits<float>::infinity();
			double posInfDouble = std::numeric_limits<double>::infinity();

			std::cout << "float: " << posInfFloat << "f\n";
			std::cout << "double: " << posInfDouble << '\n';
			exit(EXIT_SUCCESS);
		}
	}
}

static LiteralType determineType(const std::string& str)
{
	int	i = 0;

	if (str.find('.') != std::string::npos && str.size() != 1)
	{
		if (str.find('f') != std::string::npos)
			return (FLOAT);
		return (DOUBLE);
	}
	try
	{
		i = std::stoi(str);
		return (INT);
	}
	catch(const std::exception& e)
	{
		if (str.size() != 1)
		{
			std::cerr << "Wrong input, don't exceed more than max int/min int for int and don't exceed more than 1 character for char. If using special characters like ~ use quotes like '~'. Other possible inputs: nan, nanf, -inf, +inf, -inff, +inff, inf, inff\n";
			exit(EXIT_FAILURE);
		}
		return (CHAR);
	}
	return (INVALID);
}

bool	hasFractionalPart(double f)
{
	double intPart;
	return (std::modf(f, &intPart) != 0.0f);
}

static void	printFloat(const std::string& str)
{
	float		f = 0.0f;
	size_t		pos = 0;
	long long	j = 0;

	try
	{
		f = std::stof(str, &pos);
		if (pos != str.size() - 1)
		{
			std::cout << "invalid input\n";
			exit(EXIT_FAILURE);
		}
	}
	catch (std::exception& e)
	{
		std::cout << "out of range\n";
		exit(EXIT_FAILURE);
	}
	if (std::isnan(f))
		checkForValidString("nanf");
	else if (std::isinf(f))
	{
		if (f > 0)
			checkForValidString("inff");
		else
			checkForValidString("-inff");
	}
	j = static_cast<long long>(f);
	if (j < std::numeric_limits<int>::min() || j > std::numeric_limits<int>::max())
	{
		std::cout << "char: impossible" << '\n';
		std::cout << "int: impossible" << '\n';
		std::cout << "float: " << f << "f\n";
		std::cout << "double: " << static_cast<double>(f) << "\n";
		exit(EXIT_SUCCESS);		
	}
	if (j > 31 && j < 127)
		std::cout << "char: '" << static_cast<char>(j) << "'\n";
	else
		std::cout << "char: Non displayable\n"; 
	std::cout << "int: " << j << '\n';
	if (!hasFractionalPart(f))
	{
		std::cout << "float: " << f << ".0f\n";
		std::cout << "double: " << static_cast<double>(f) << ".0\n";
	}
	else
	{
		std::cout << "float: " << f << "f\n";
		std::cout << "double: " << static_cast<double>(f) << "\n";
	}
}

static void	printDouble(const std::string& str)
{
	double		d = 0.0;
	size_t		pos = 0;
	long long	j = 0;

	try
	{
		d = std::stod(str, &pos);
		if (pos != str.size())
		{
			std::cout << "invalid input\n";
			exit(EXIT_FAILURE);
		}
	}
	catch (std::exception& e)
	{
		std::cout << "out of range\n";
		exit(EXIT_FAILURE);
	}
	if (std::isnan(d))
		checkForValidString("nan");
	else if (std::isinf(d))
	{
		if (d > 0)
			checkForValidString("inf");
		else
			checkForValidString("-inf");
	}
	j = static_cast<long long>(d);
	if (j < std::numeric_limits<int>::min() || j > std::numeric_limits<int>::max())
	{
		std::cout << "char: impossible" << '\n';
		std::cout << "int: impossible" << '\n';
		std::cout << "float: " << static_cast<float>(d) << "f\n";
		std::cout << "double: " << d << "\n";
		exit(EXIT_SUCCESS);
	}
	if (j > 31 && j < 127)
		std::cout << "char: '" << static_cast<char>(j) << "'\n"; 
	else
		std::cout << "char: Non displayable\n"; 
	std::cout << "int: " << j << '\n';
	if (!hasFractionalPart(d))
	{
		std::cout << "float: " << static_cast<float>(d) << ".0f\n";
		std::cout << "double: " << d << ".0\n";
	}
	else
	{
		std::cout << "float: " << static_cast<float>(d) << "f\n";
		std::cout << "double: " << d << "\n";
	}
}

static void	printInt(const std::string& str)
{
	int	i = std::stoi(str);
	if (i > 31 && i < 127)
		std::cout << "char: '" << static_cast<char>(i) << "'\n"; 
	else
		std::cout << "char: Non displayable\n"; 
	std::cout << "int: " << i << '\n';
	std::cout << "float: " << static_cast<float>(i) << ".0f\n";
	std::cout << "double: " << static_cast<double>(i) << ".0\n";
}

void	ScalarConverter::convert(const std::string& str)
{
	checkForValidString(str);
	LiteralType	type = determineType(str);

	switch (type)
	{
		case FLOAT:
		{
			printFloat(str);
			break ;
		}
		case DOUBLE:
		{
			printDouble(str);
			break ;
		}
		case CHAR:
		{
			std::cout << "char: '" << str[0] << "'\n";
			std::cout << "int: " << static_cast<int>(str[0]) << '\n';
			std::cout << "float: " << static_cast<float>(str[0]) << ".0f\n";
			std::cout << "double: " << static_cast<double>(str[0]) << "\n";			
			break ;
		}
		case INT:
		{
			printInt(str);
			break ;
		}
		default:
		{
		}
	}
}
