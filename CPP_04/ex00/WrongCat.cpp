//
// Created by Advisor Woods on 1/14/22.
//

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{ std::cout << "Constructor WrongCat called" << std::endl; }

WrongCat::~WrongCat()
{ std::cout << "Destructor WrongCat called" << std::endl; }

WrongCat::WrongCat(const WrongCat &cp)
{
	WrongCat::operator=(cp);
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &operat)
{
	this->type = operat.type;
	std::cout << "WrongCat assignation operator overload called" << std::endl;
	return (*this);
}

void	WrongCat::makeSound() const
{ std::cout << "+++     WrongCat sounds    +++" << std::endl; }
