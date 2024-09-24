#include "Span.hpp"

int	main(void)
{
	Span	span1;
	Span	span2(20);
	Span	span3(span1);

	// test copy and assignment to see if they don't share memory
	std::cout << span1.getMaxSize() << '\n';
	std::cout << span2.getMaxSize() << '\n';
	std::cout << span3.getMaxSize() << '\n';
	span1 = span2;
	std::cout << "3 should stay 0: " << span3.getMaxSize() << '\n';
	std::cout << "1 should become 20: " << span1.getMaxSize() << '\n';
	std::cout << "----------------------\n";
	try
	{
		// limit testing with max and min int
		span1.addNumber(2147483647);
		span1.addNumber(0);
		// span1.addNumber(-2147483648);
		std::cout << span1.getCurrentSize() << '\n';
		std::cout << span1.shortestSpan() << '\n';
		std::cout << span1.longestSpan() << '\n';
		std::cout << "----------------------\n";
		// fill entire vector with pseudo-random values
		span2.fillVec();
		std::cout << span2.getCurrentSize() << '\n';
		std::cout << span2.shortestSpan() << '\n';
		std::cout << span2.longestSpan() << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

// // subject main
// int main()
// {
// 	Span sp = Span(5);
// 	sp.addNumber(6);
// 	sp.addNumber(3);
// 	sp.addNumber(17);
// 	sp.addNumber(9);
// 	sp.addNumber(11);
// 	std::cout << sp.shortestSpan() << std::endl;
// 	std::cout << sp.longestSpan() << std::endl;
// 	return 0;
// }