//
// Created by Advisor Woods on 1/14/22.
//

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Constructor Cat called" << std::endl;
	b_cat = new Brain();
}

Cat::~Cat()
{
	delete b_cat;
	std::cout << "Destructor Cat called" << std::endl;
}

Cat::Cat(const Cat &cp) : Animal(cp)
{
//	Cat::operator=(cp);
	b_cat = new Brain(); //мозги будут скопированы в другой адрес
	(*this) = cp;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &operat)
{
	if (this->b_cat)
		delete b_cat;
	this->type = operat.getType();
	this->b_cat = new Brain(*operat.b_cat); //мозги будут скопированы в другой адрес
	std::cout << "Cat assignation operator overload called" << std::endl;
	return (*this);
}

void	Cat::makeSound() const
{ std::cout << "***     Cat sounds    ***" << std::endl; }
