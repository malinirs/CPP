//
// Created by Advisor Woods on 1/14/22.
//

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal
{
protected:
	std::string	type;
	Animal(const std::string &type);

public:
	Animal();
	Animal(Animal const &cp);
	Animal &operator=(Animal const &oper);
	virtual ~Animal();

	virtual void		makeSound() const = 0; // Сообщаем, что ф чистая виртуальная. Теперь класс абстрактный
	std::string const	&getType() const;
};

#endif
