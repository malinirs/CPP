//
// Created by Advisor Woods on 12/13/21.
//

#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>

class Karen
{
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	void	(Karen::*all_complain[4])(void); // создает массив из ссылок

public:
	Karen();
	~Karen();
	void complain(std::string level); //вызывает частные функции в зависимости от уровня,
									 // переданного в качестве параметра
};

#endif