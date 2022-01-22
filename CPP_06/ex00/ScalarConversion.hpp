//
// Created by Advisor Woods on 1/20/22.
//

#ifndef SCALAR_CONVERSION_HPP
# define SCALAR_CONVERSION_HPP

# include <iostream>
# include <string>
# include <cmath>
# include <climits>

class ScalarConversion
{
private:
	std::string	str;
	bool		dot; // есть ли точка
	std::string	ptr; // новая строчка обрезанная от лишних символов
	int			count_zero; // количество нулей
	ScalarConversion();

public:
	ScalarConversion(const std::string& name);
	ScalarConversion(ScalarConversion const &cp);
	ScalarConversion &operator=(ScalarConversion const &oper);
	~ScalarConversion();

	class Error : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};

	void	convert();
	int		check_number(char first, char second);
	void	work_number();
	int		count_len();
	void	check();
};

#endif