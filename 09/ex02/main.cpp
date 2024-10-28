#include "PmergeMe.hpp"

void	rangeCheck(const std::string& input)
{
	// check here for bigger than max int or negative numbers
	std::stringstream	ss(input);
	// if ()
}

std::string	checkInput(char** input)
{
	size_t		i = 1;
	std::string	beforeSorting;

	while (input[i])
	{
		for (size_t	j = 0; j < std::strlen(input[i]); j++)
		{
			if (!std::isdigit(input[i][j]) && input[i][j] != ' ')
			{
				std::cout << "Please only use numbers!\n";
				std::exit(EXIT_FAILURE);
			}
			beforeSorting.push_back(input[i][j]);
		}
		beforeSorting += " ";
		i++;
	}
	if (!beforeSorting.empty())
		beforeSorting.pop_back();
	rangeCheck(beforeSorting);
	return(beforeSorting);
}

int	main(int argc, char** argv)
{
	if (argc < 2)
	{
		std::cerr << "Wrong input, try ./PmergeMe 1 3 2\n";
		return (EXIT_FAILURE);
	}
	std::string	input = checkInput(argv);
	PmergeMe merge(input);
}
