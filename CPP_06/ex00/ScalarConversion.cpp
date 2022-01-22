//
// Created by Advisor Woods on 1/20/22.
//

#include "ScalarConversion.hpp"

ScalarConversion::ScalarConversion(const std::string& name) : str(name) {}

ScalarConversion::~ScalarConversion() {}

ScalarConversion::ScalarConversion(ScalarConversion const &cp)
{ ScalarConversion::operator=(cp); }

ScalarConversion &ScalarConversion::operator=(ScalarConversion const &oper)
{
	if (this == &oper)
		return (*this);
	str = oper.str;
	return (*this);
}

const char*	ScalarConversion::Error::what() const throw()
{ return ("Cannot be converted: An undisplayable character was passed!"); }

int	ScalarConversion::check_number(char first, char second)
{
	if (first == '-' && second > 47 && second < 58)
		return (1);
	if (first > 47 && first < 58)
		return (1);
	return (0);
}

int		ScalarConversion::count_len()
{
	int	i = 0;
	int	temp;

	if (str[i] == '-')
		i++;
	while (std::isdigit(str[i]))
		i++;
	this->dot = false;
	if (str[i] == '.')
	{
		i++;
		this->dot = true;
		temp = i;
	}
	while (std::isdigit(str[i]))
		i++;
	if (temp == i) // на случай если подать в argv "90."
		this->dot = false;
	return (i);
}

void	ScalarConversion::work_number()
{
	int	len = count_len();
	this->ptr = this->str.substr(0, len);

	int	number_int = static_cast<int>(std::stoi(this->ptr));
	if (number_int < 33 || number_int > 126) // вывод char
		std::cout << "Char  : " << "transformation is meaningless" << std::endl;
	else
		std::cout << "Char  : " << static_cast<char>(number_int) << std::endl;

	std::cout << "Int   : " << number_int << std::endl;

	float	number_f = static_cast<float>(std::stof(this->ptr));
	double 	number_d = static_cast<double>(std::stod(this->ptr));
	if (this->dot)
	{
		std::cout << "Float : " << number_f << "f"<< std::endl;
		std::cout << "Double: " << number_d << std::endl;
	}
	else
	{
		std::cout << "Float : " << number_f << ".0f" << std::endl;
		std::cout << "Double: " << number_d << ".0" << std::endl;
	}
}

void	ScalarConversion::convert()
{
	if (str[0] < 33 || str[0] > 126) // проверка на то, что символ отображаемый
		throw ScalarConversion::Error();
	if (check_number(str[0], str[1])) //работаем как с числом
		work_number();
	else // работаем как с символом
	{
		std::cout << "Char  : " << str[0] << std::endl;
		std::cout << "Int   : " << "transformation is meaningless" << std::endl;
		std::cout << "Float : " << "transformation is meaningless" << std::endl;
		std::cout << "Double: " << "transformation is meaningless" << std::endl;
	}
}
