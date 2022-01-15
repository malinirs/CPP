//
// Created by Advisor Woods on 1/14/22.
//

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Constructor Dog called" << std::endl;
	b_dog = new Brain();
}

Dog::~Dog()
{
	delete b_dog;
	std::cout << "Destructor Dog called" << std::endl;
}

Dog::Dog(const Dog &cp)
{
//	Dog::operator=(cp);
	b_dog = new Brain();
	(*this) = cp;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &operat)
{
	if (this->b_dog)
		delete b_dog;
	this->type = operat.getType();
	this->b_dog = new Brain(*operat.b_dog);
	std::cout << "Dog assignation operator overload called" << std::endl;
	return (*this);
}

void	Dog::makeSound() const
{ std::cout << "***     Dog sounds    ***" << std::endl; }
