#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class Array
{
private:
	T				*element;
	unsigned int	len_element;

public:
	Array() : element(0x0), len_element(0) {} ;
	Array(unsigned int n) : element(new T[n]), len_element(n) {} ;
	Array(Array const &cp)
	{
		element = new T[cp.len_element];
		len_element = cp.len_element;
		for (unsigned int index = 0; index < len_element; index++)
			element[index] = cp.element[index];
	};
	Array &operator=(Array const &oper)
	{
		if (element)
			delete element;
		element = new T[len_element];
		len_element = oper.len_element;
		for (unsigned int index = 0; index < len_element; index++)
			element[index] = oper.element[index];
		return (*this);
	};
	virtual ~Array() { delete element; };

	class Error : public std::exception
	{
		public:
			const char* what() const throw() { return (" *** Error *** "); };
	};

	T	&operator[](const unsigned int cout)
	{
		if (cout > len_element - 1 || cout < 0)
			throw Error();
		return (element[cout]);
	};

//	unsigned int	getSize(void) const { return (len_element); }
};


#endif