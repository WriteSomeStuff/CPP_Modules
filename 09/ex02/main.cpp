#include "PmergeMe.hpp"
#include <chrono>

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
		if (!input[i][0])
		{
			std::cerr << "Please don't use empty strings :(\n";
			std::exit(EXIT_FAILURE);
		}
		for (size_t	j = 0; j < std::strlen(input[i]); j++)
		{
			if (!std::isdigit(input[i][j]) && input[i][j] != ' ')
			{
				std::cerr << "Please only use positive numbers!\n";
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
	if (argc < 2)
	{
		std::cerr << "Wrong input, try ./PmergeMe 1 3 2\n";
		return (EXIT_FAILURE);
	}
	const std::string input = checkInput(argv);

	auto startVec = std::chrono::high_resolution_clock::now();

	PmergeMe<std::vector<int>> mergeVec(input);
	mergeSortVec(mergeVec.getHigherNr(), mergeVec.getLowerNr(), 0, mergeVec.getHigherNr().size() - 1);
	mergeInsertion(mergeVec.getHigherNr(), mergeVec.getLowerNr());

	auto endVec = std::chrono::high_resolution_clock::now();
	auto durationVec = std::chrono::duration_cast<std::chrono::microseconds>(endVec - startVec).count();

	mergeVec.printSortedNumbers();


	auto startList = std::chrono::high_resolution_clock::now();

	PmergeMe<std::list<int>> mergeList(input);
	mergeSortList(mergeList.getHigherNr(), mergeList.getLowerNr());
	mergeInsertion(mergeList.getHigherNr(), mergeList.getLowerNr());

	auto endList = std::chrono::high_resolution_clock::now();
	auto durationList = std::chrono::duration_cast<std::chrono::microseconds>(endList - startList).count();

	mergeList.printSortedNumbers();

	if (std::is_sorted(mergeVec.getHigherNr().begin(), mergeVec.getHigherNr().end()) && std::is_sorted(mergeList.getHigherNr().begin(), mergeList.getHigherNr().end()))
		std::cout << "It's sorted!\n";
	else
		std::cout << "It's ruined!\n";
	std::cout << "Time to process with std::vector: " << durationVec << "us\n";
	std::cout << "Time to process with std::list: " << durationList << "us\n";
}
