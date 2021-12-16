//
// Created by Advisor Woods on 12/14/21.
//

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int					point;
	static const int	nbr_bits = 8; //количество дробных битов
public:
	Fixed();
	Fixed(Fixed const &copy); //const, чтобы не было рекурсивного вызова конструктора копирования
	Fixed &operator=(Fixed const &oper); // перегрузка оператора присваивания
	~Fixed();

	int getRawBits (void) const; //возвращает исходное значение фиксир точки
	void setRawBits (int const start); //устанавливает исходное значение фиксир
	// точки
};

#endif