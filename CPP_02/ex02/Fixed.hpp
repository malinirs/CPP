//
// Created by Advisor Woods on 12/14/21.
//

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int					point;
	static const int	nbr_bits = 8; //количество дробных битов
public:
	Fixed();
	Fixed(Fixed const &copy); //const, чтобы не было рекурсивного вызова конструктора копирования

	Fixed(int const point); //преобразует число в соответствующее значение фиксированной (8) точки
	Fixed(float const point); //преобразует плавающую точку в соответствующее значение с фиксированной (8) точкой.

	//перегрузки операторов:
	Fixed	&operator=(Fixed const &oper);

	bool	operator>(Fixed const &oper) const;
	bool	operator<(Fixed const &oper) const;
	bool	operator>=(Fixed const &oper) const;
	bool	operator<=(Fixed const &oper) const;
	bool	operator==(Fixed const &oper) const;
	bool	operator!=(Fixed const &oper) const;

	Fixed	operator+(Fixed const &oper);
	Fixed	operator-(Fixed const &oper);
	Fixed	operator*(Fixed const &oper);
	Fixed	operator/(Fixed const &oper);

	Fixed	operator++(); //пре-инкремент
	Fixed	operator--(); //пре-декремент
	Fixed	operator++(int); //пост-инкремент
	Fixed	operator--(int); //пост-декремент

	~Fixed();

	int					getRawBits (void) const; //возвращает исходное значение фиксир точки
	void				setRawBits (int const start); //устанавливает исходное значение фиксир точки
	float				toFloat (void) const; //преобразует значение с фиксированной запятой в значение с плавающей запятой
	int					toInt (void) const; //преобразует значение с фиксированной точкой в целое число
	static Fixed		&min(Fixed &a, Fixed &b); //принимает ссылки на два значения с фиксированной точкой и возвращает ссылку на наименьшее значение
	static Fixed const	&min(Fixed const &a, Fixed const &b); //принимает ссылки на два постоянных значения с фиксированной точкой и возвращает ссылку на наименьшее постоянное значение
	static Fixed		&max(Fixed &a, Fixed &b); //принимает ссылки на два значения с фиксированной точкой и возвращает ссылку на наибольшее значение
	static Fixed const	&max(Fixed const &a, Fixed const &b); //принимает ссылки на два постоянных значения с фиксированной точкой и возвращает ссылку на наибольшее постоянное значение
};

std::ostream	&operator<<(std::ostream &cout, Fixed const &clas);//Перегрузка оператора «,
//который вставляет представление с плавающей запятой значения с фиксированной запятой в поток вывода параметра

#endif