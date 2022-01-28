//
// Created by Advisor Woods on 1/24/22.
//

#include "Span.hpp"

Span::Span(unsigned int N) : len(N) {}

Span::~Span() { this->array.clear(); }

Span::Span(Span const &cp)
{
	this->len = cp.len;
	this->array = cp.array;
}

Span &Span::operator=(Span const &oper)
{
	this->len = oper.len;
	this->array = oper.array;

	return (*this);
}

const char*	Span::Error1::what() const throw()
{ return ("Number not added: array is full :("); }

const char*	Span::Error2::what() const throw()
{ return ("Could not find range between numbers :("); }

void	Span::addNumber(int number)
{
	if (this->array.size() < len)
		this->array.push_back(number);
	else
		throw Span::Error1();
}

int		Span::shortestSpan()
{
	unsigned int				temp;
	unsigned int				temp_minimum;
	std::vector<int>::iterator	first;
	std::vector<int>::iterator	second;

	if (this->len == 0 || this->len == 1)
		throw Span::Error2();
	first = array.begin();
	temp_minimum = abs(*first - *(first + 1));
	for (first = array.begin() ; first != array.end(); ++first)
	{
		for (second = 1 + first; second != array.end(); second++)
		{
			temp = abs(*second - *first);
			if (temp < temp_minimum)
				temp_minimum = temp;
		}
	}
	return (temp_minimum);
}

int		Span::longestSpan()
{
	std::vector<int>::iterator	first;
	std::vector<int>::iterator	second;

	if (this->len == 0 || this->len == 1)
	throw Span::Error2();
	first = std::max_element(array.begin(), array.end());
	second = std::min_element(array.begin(), array.end());
	return (*first - *second);
}

void	Span::print()
{
	std::cout << "Array = ";
	for (int index = 0; index < 5; ++index)
		std::cout << "[" << this->array[index] << "] ";
	std::cout << std::endl;
}
