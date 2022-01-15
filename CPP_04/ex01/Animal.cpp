//
// Created by Advisor Woods on 1/14/22.
//

# include "Animal.hpp"
//# include "Brain.hpp"

Animal::Animal() : type("Animal")
{ std::cout << "Constructor Animal called" << std::endl; }

Animal::~Animal()
{ std::cout << "Destructor Animal called" << std::endl; }

Animal::Animal(const std::string &type) : type(type)
{ std::cout << "Constructor Animal called" << std::endl; }

Animal::Animal(const Animal &cp)
{
	Animal::operator=(cp);
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal	&Animal::operator=(const Animal &oper)
{
	this->type = oper.type;
	std::cout << "Animal assignation operator overload called" << std::endl;
	return (*this);
}

std::string const	&Animal::getType() const
{ return (type); }

void	Animal::makeSound() const
{ std::cout << "***   Animal sounds   ***" << std::endl; }
