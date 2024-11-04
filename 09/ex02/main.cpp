#include "PmergeMe.hpp"

void	rangeCheck(const std::string& input)
{
	std::istringstream	ss(input);
	std::string			check;
	while (ss >> check)
	{
		try
		{
			long long int tmp = std::stoll(check);
			if (tmp > INT_MAX)
			{
				std::cerr << "Error: larger than max int given\n";
				std::exit(EXIT_FAILURE);
			}
		}
		catch(const std::exception& e)
		{
			std::cerr << "Error: " << e.what() << '\n';
			std::exit(EXIT_FAILURE);
		}
	}
}

const std::string	checkInput(char** input)
{
	size_t		i = 1;
	std::string	beforeSorting;

	while (input[i])
	{
		for (size_t	j = 0; j < std::strlen(input[i]); j++)
		{
			if (!std::isdigit(input[i][j]) && input[i][j] != ' ')
			{
				std::cout << "Please only use positive numbers!\n";
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
	std::cout << "Before sorting: " << beforeSorting << '\n';
	return(beforeSorting);
}

int	main(int argc, char** argv)
{
	// time 1
	// time 2
	if (argc < 2)
	{
		std::cerr << "Wrong input, try ./PmergeMe 1 3 2\n";
		return (EXIT_FAILURE);
	}
	const std::string	input = checkInput(argv);

	// grab time for vec
	PmergeMe<std::vector<int>> mergeVec(input);
	mergeSortVec(mergeVec.getHigherNr(), mergeVec.getLowerNr(), 0, mergeVec.getHigherNr().size() - 1);
	mergeInsertion(mergeVec.getHigherNr(), mergeVec.getLowerNr());
	// grab time to calculate how long sorting took
	mergeVec.printSortedNumbers();

	// grab time for list
	PmergeMe<std::list<int>> mergeList(input);
	mergeSortList(mergeList.getHigherNr(), mergeList.getLowerNr());
	mergeInsertion(mergeList.getHigherNr(), mergeList.getLowerNr());
	// grab time to calculate how long sorting took
	mergeList.printSortedNumbers();

	// std::cout << "Time to process with std::vector: " << time1 << "us\n";
	// std::cout << "Time to process with std::list: " << time2 << "us\n";
}
