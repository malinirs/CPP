//
// Created by Advisor Woods on 1/14/22.
//

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{ std::cout << "Constructor WrongAnimal called" << std::endl; }

WrongAnimal::~WrongAnimal()
{ std::cout << "Destructor WrongAnimal called" << std::endl; }

WrongAnimal::WrongAnimal(const std::string &type) : type(type)
{ std::cout << "Constructor WrongAnimal called" << std::endl; }

WrongAnimal::WrongAnimal(const WrongAnimal &cp)
{
	WrongAnimal::operator=(cp);
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &oper)
{
	this->type = oper.type;
	std::cout << "WrongAnimal assignation operator overload called" << std::endl;
	return (*this);
}

std::string const	&WrongAnimal::getType() const
{ return (type); }

void	WrongAnimal::makeSound() const
{ std::cout << "+++   WrongAnimal sounds   +++" << std::endl; }