//
// Created by Advisor Woods on 12/14/21.
//

#include "Fixed.hpp"

Fixed::Fixed() : point(0) { std::cout << "Default constructor called" << std::endl; }
Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->point = copy.getRawBits();
}

int	Fixed::getRawBits (void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->point);
}

Fixed &Fixed::operator=(Fixed const &oper)
{
	std::cout << "Assignation operator called" << std::endl;
	this->point = oper.getRawBits();
	return (*this);
}

void Fixed::setRawBits (int const start)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->point = start;
}
