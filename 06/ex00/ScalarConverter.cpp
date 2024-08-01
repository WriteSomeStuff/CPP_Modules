#include "ScalarConverter.hpp"
#include <iostream>

enum LiteralType
{
	FLOAT,
	DOUBLE,
	CHAR,
	INT
};

void	ScalarConverter::convert(const std::string& str)
{
	LiteralType	determineType{};
	int	i = 0;

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
				std::cout << "char: " << static_cast<char>(j) << '\n'; 
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
			double	d = 0.0f;
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
				std::cout << "char: " << static_cast<char>(j) << '\n'; 
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
			std::cout << "is char\n"; 
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
				std::cout << "char: " << static_cast<char>(i) << '\n'; 
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
