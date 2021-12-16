//
// Created by Advisor Woods on 12/14/21.
//

#include "Fixed.hpp"

Fixed::Fixed() : point(0) { std::cout << "Default constructor called" << std::endl; }
Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	Fixed::operator=(copy);
}

int	Fixed::getRawBits (void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->point);
}

Fixed &Fixed::operator=(Fixed const &oper)
{
	std::cout << "Assignation operator called" << std::endl;
	this->point = oper.point;
	return (*this);
}

void Fixed::setRawBits (int const start)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->point = start;
}


Fixed::Fixed(int const point)
{
	std::cout << "Int constructor called" << std::endl;
	this->point = (point << Fixed::nbr_bits);
}

Fixed::Fixed(float const point)
{
	std::cout << "Float constructor called" << std::endl;
	this->point = roundf(point * (1 << Fixed::nbr_bits));
}

float	Fixed::toFloat (void) const
{
	float	a = (float)this->point / (float)(1 << Fixed::nbr_bits);
	return (a);
}
int	Fixed::toInt (void) const
{
	return (this->point >> Fixed::nbr_bits);
}

// std::cout - это объект std::ostream
std::ostream	&operator<<(std::ostream &ccout, Fixed const &tem)
{
	ccout << tem.toFloat();
	return (ccout);
}
// retern (ccout) позволяет «связать» стейтменты вывода вместе, например, std::cout << a << std::endl;
// Возвращая параметр out в качестве возвращаемого значения выражения (std::cout << point),
// мы возвращаем std::cout, и вторая часть нашего выражения обрабатывается как std::cout << std::endl;