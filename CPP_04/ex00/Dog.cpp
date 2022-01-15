//
// Created by Advisor Woods on 1/14/22.
//

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{ std::cout << "Constructor Dog called" << std::endl; }

Dog::~Dog()
{ std::cout << "Destructor Dog called" << std::endl; }

Dog::Dog(const Dog &cp)
{
	Dog::operator=(cp);
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &operat)
{
	this->type = operat.type;
	std::cout << "Dog assignation operator overload called" << std::endl;
	return (*this);
}

void	Dog::makeSound() const
{ std::cout << "***     Dog sounds    ***" << std::endl; }