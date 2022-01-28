//
// Created by Advisor Woods on 1/24/22.
//

#ifndef CPP_SPAN_HPP
#define CPP_SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span
{
private:
	std::vector<int>	array;
	unsigned int		len;

public:
	Span(unsigned int N);
	Span(Span const &cp);
	Span &operator=(Span const &oper);
	~Span();

	class Error1 : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	class Error2 : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	void	addNumber(int number);
	int		shortestSpan();
	int		longestSpan();

	void	print();
};

#endif