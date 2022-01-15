//
// Created by Advisor Woods on 1/14/22.
//

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

class WrongAnimal
{
protected:
	std::string	type;
	WrongAnimal(const std::string &type);//

public:
	WrongAnimal();//
	WrongAnimal(WrongAnimal const &cp);
	WrongAnimal &operator=(WrongAnimal const &oper);//
	virtual ~WrongAnimal();//

	void				makeSound() const;//
	std::string const	&getType() const;//
};


#endif