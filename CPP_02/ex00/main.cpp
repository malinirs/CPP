#include <iostream>

#include "Fixed.hpp"

int main(void)
{
	Fixed	a; // =0
	Fixed	b(a); //копируется значение
	Fixed	c;

	c = b; // данные приравнялись к другому объекту. Присваивание
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return (0);
}