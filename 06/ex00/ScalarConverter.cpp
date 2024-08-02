#include "ScalarConverter.hpp"
#include <iostream>
#include <limits>
#include <cmath>

enum LiteralType
{
	FLOAT,
	DOUBLE,
	CHAR,
	INT
};

static void	checkForValidString(const std::string& str)
{
	std::string allLevels[] = {"nan", "nanf", "-inf", "+inf", "-inff", "+inff"};
	
	int	which = -1;
	for (int i = 0; i < 6; i++)
	{
		if (allLevels[i] == str)
		{
			which = i;
			break ;	
		}
	}
	if (which == 1)
		which = 0;
	if (which == 4)
		which = 1;
	if (which == 5)
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

			std::cout << "char: impossible\n";
			std::cout << "int: impossible\n";
			std::cout << "float: " << nanf << "f\n";
			std::cout << "double: " << nan << '\n';
			exit(EXIT_SUCCESS);
		}
		case 1:
		{
			float negInfFloat = -std::numeric_limits<float>::infinity();
			double negInfDouble = -std::numeric_limits<double>::infinity();

			std::cout << "char: impossible\n";
			std::cout << "int: impossible\n";
			std::cout << "float: " << negInfFloat << "f\n";
			std::cout << "double: " << negInfDouble << '\n';
			exit(EXIT_SUCCESS);
		}
		case 2:
		{
			float posInfFloat = std::numeric_limits<float>::infinity();
			double posInfDouble = std::numeric_limits<double>::infinity();

			std::cout << "char: impossible\n";
			std::cout << "int: impossible\n";
			std::cout << "float: " << posInfFloat << "f\n";
			std::cout << "double: " << posInfDouble << '\n';
			exit(EXIT_SUCCESS);
		}
	}
}

void	ScalarConverter::convert(const std::string& str)
{
	LiteralType	determineType{};
	int	i = 0;

	checkForValidString(str);
	if (str.find('.') != std::string::npos && str.size() != 1)
	{
		if (str.find('f') != std::string::npos)
		{
			determineType = FLOAT;
		}
		else
		{
			determineType = DOUBLE;
		}
	}
	else
	{
		try
		{
			i = std::stoi(str);
			determineType = INT;
		}
		catch(const std::exception& e)
		{
			if (str.size() != 1)
			{
				std::cerr << "Wrong input, don't exceed more than max int/min int for int and don't exceed more than 1 character for char. If using special characters like ~ use quotes like '~'. Other possible inputs: nan, nanf, -inf, +inf, -inff, +inff\n";
				exit(EXIT_FAILURE);
			}
			determineType = CHAR;
		}
	}

	switch (determineType)
	{
		case FLOAT:
		{
			float	f = 0.0f;
			int		j = 0;
			try
			{
				f = std::stof(str);
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
				exit(EXIT_FAILURE);
			}
			j = static_cast<int>(f);
			if (j > 31 && j < 127)
			{
				std::cout << "char: '" << static_cast<char>(j) << "'\n"; 
			}
			else
			{
				std::cout << "char: Non displayable\n"; 
			}
			std::cout << "int: " << j << '\n';
			if (str[2] == '0' && str.size() == 4)
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
		break ;
		case DOUBLE:
		{
			double	d = 0.0;
			int		j = 0;
			try
			{
				d = std::stod(str);
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
				exit(EXIT_FAILURE);
			}
			j = static_cast<int>(d);
			if (j > 31 && j < 127)
			{
				std::cout << "char: '" << static_cast<char>(j) << "'\n"; 
			}
			else
			{
				std::cout << "char: Non displayable\n"; 
			}
			std::cout << "int: " << j << '\n';
			if (str[2] == '0' && str.size() == 3)
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
		break ;
		case CHAR:
		{
			std::cout << "char: '" << str[0] << "'\n";
			std::cout << "int: " << static_cast<int>(str[0]) << '\n';
			std::cout << "float: " << static_cast<float>(str[0]) << ".0f\n";
			std::cout << "double: " << static_cast<double>(str[0]) << "\n";			
		}
		break ;
		case INT:
		{
			try
			{
				i = std::stoi(str);
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
				exit(EXIT_FAILURE);
			}
			if (i > 31 && i < 127)
			{
				std::cout << "char: '" << static_cast<char>(i) << "'\n"; 
			}
			else
			{
				std::cout << "char: Non displayable\n"; 
			}
			std::cout << "int: " << i << '\n';
			std::cout << "float: " << static_cast<float>(i) << ".0f\n";
			std::cout << "double: " << static_cast<double>(i) << ".0\n";
		}
		break ;
		default:
		{
		}
	}
}
