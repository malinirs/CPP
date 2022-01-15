//
// Created by Advisor Woods on 1/14/22.
//

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{ std::cout << "Constructor Cat called" << std::endl; }

Cat::~Cat()
{ std::cout << "Destructor Cat called" << std::endl; }

Cat::Cat(const Cat &cp)
{
	Cat::operator=(cp);
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &operat)
{
	this->type = operat.type;
	std::cout << "Cat assignation operator overload called" << std::endl;
	return (*this);
}

void	Cat::makeSound() const
{ std::cout << "***     Cat sounds    ***" << std::endl; }