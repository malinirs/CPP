#include "Span.hpp"

int	main(void)
{
	Span	sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	sp.print();
	std::cout << "short = " << sp.shortestSpan() << std::endl;
	std::cout << "long = " << sp.longestSpan() << std::endl;

	return (0);
}