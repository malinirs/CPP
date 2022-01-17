//
// Created by Advisor Woods on 1/16/22.
//

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include <string>
# include <iostream>
# include "AMateria.hpp"

class IMateriaSource
{
public:
	virtual				~IMateriaSource() {};
	virtual void		learnMateria(AMateria*) = 0; // должен скопировать Материю, переданную в качестве параметра,
													// и сохранить ее в памяти для последующего клонирования
	virtual AMateria*	createMateria(std::string const & type) = 0; // вернет новую Материю, которая будет копией
				// Материи (ранее изученной Источником), тип которой равен параметру. Возвращает 0, если тип неизвестен.
};

#endif