//
// Created by Advisor Woods on 12/13/21.
//

#include "Karen.hpp"

Karen::Karen()
{
	all_complain[0] = &Karen::debug;
	all_complain[1] = &Karen::info;
	all_complain[2] = &Karen::warning;
	all_complain[3] = &Karen::error;
}
Karen::~Karen() {}

void Karen::complain(std::string level)
{
	int	flag = 0;
	std::string	str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int index = 0; index < 4; index++)
	{
		if (level == str[index])
		{
			(this->*all_complain[index])();
			flag = 1;
		}
	}
	if (!flag)
		std::cout << "Unknown message" << std::endl;
}

void	Karen::debug(void)
{
	std::cout << "I love to get extra bacon for ";
	std::cout << "my 7XL-double-cheese-triple-pickle-special-ketchup burger. ";
	std::cout << "I just love it!" << std::endl;
}
void	Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. ";
	std::cout << "You don’t put enough! ";
	std::cout << "If you did I would not have to ask for it!" << std::endl;
}
void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout << "I’ve been coming here for years and you just started ";
	std::cout << "working here last month." << std::endl;
}
void	Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}
