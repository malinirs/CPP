//
// Created by Advisor Woods on 12/14/21.
//

#include "Fixed.hpp"

Fixed::Fixed() : point(0) {}
Fixed::~Fixed() {}

Fixed::Fixed(Fixed const &copy) { Fixed::operator=(copy); }

int	Fixed::getRawBits (void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->point);
}

void Fixed::setRawBits (int const start)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->point = start;
}

Fixed &Fixed::operator=(Fixed const &oper)
{
	this->point = oper.point;
	return (*this);
}

Fixed::Fixed(int const point) { this->point = (point << Fixed::nbr_bits); }
Fixed::Fixed(float const point) { this->point = roundf(point * (1 << Fixed::nbr_bits)); }

float	Fixed::toFloat (void) const
{
	float	a = (float)this->point / (float)(1 << Fixed::nbr_bits);
	return (a);
}
int	Fixed::toInt (void) const { return (this->point >> Fixed::nbr_bits); }

// std::cout - это объект std::ostream
std::ostream	&operator<<(std::ostream &ccout, Fixed const &tem)
{
	ccout << tem.toFloat();
	return (ccout);
}
// retern (ccout) позволяет «связать» стейтменты вывода вместе, например, std::cout << a << std::endl;
// Возвращая параметр out в качестве возвращаемого значения выражения (std::cout << point),
// мы возвращаем std::cout, и вторая часть нашего выражения обрабатывается как std::cout << std::endl;

bool	Fixed::operator>(Fixed const &oper) const { return(this->point > oper.point); }
bool	Fixed::operator<(Fixed const &oper) const { return(this->point < oper.point); }
bool	Fixed::operator>=(Fixed const &oper) const { return(this->point >= oper.point); }
bool	Fixed::operator<=(Fixed const &oper) const { return(this->point <= oper.point); }
bool	Fixed::operator==(Fixed const &oper) const { return(this->point == oper.point); }
bool	Fixed::operator!=(Fixed const &oper) const { return(this->point != oper.point); }

Fixed	Fixed::operator+(Fixed const &oper) { return(this->point + oper.point); }
Fixed	Fixed::operator-(Fixed const &oper) { return(this->point - oper.point); }
Fixed	Fixed::operator*(Fixed const &oper)
{
	long long	temp = (long long)this->point;
	long long	temp1 = (long long)oper.point;
	Fixed	ori;
	ori.point = ((temp * temp1) / (1 << Fixed::nbr_bits));
	return (ori);
}
Fixed	Fixed::operator/(Fixed const &oper)
{
	if (oper.point != 0)
	{
		long long temp1 = (long long) this->point;
		long long temp2 = (long long) oper.point;
		Fixed	ori;
		ori.point = ((temp1 * (1 << Fixed::nbr_bits)) / temp2);
		return (ori);
	}	else
	{
		std::cout << "Division by zero" << std::endl;
		Fixed ori(-1);
		return (ori);
	}
}

Fixed	Fixed::operator++()
{
	++(this->point);
	return (*this); }
Fixed	Fixed::operator--()
{
	--(this->point);
	return (*this); }
Fixed	Fixed::operator++(int)
{
	Fixed	ori(*this);
	++(this->point);
	return (ori); }
Fixed	Fixed::operator--(int)
{
	Fixed	ori(*this);
	--(this->point);
	return (ori); }

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a > b)
		return (b);
	return (a); }
Fixed const	&Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (b);
	return (a); }
Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b); }
Fixed const	&Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (a);
	return (b); }
