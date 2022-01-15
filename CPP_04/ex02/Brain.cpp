//
// Created by Advisor Woods on 1/14/22.
//

#include "Brain.hpp"

Brain::Brain()
{ std::cout << "Constructor Brain called" << std::endl; }

Brain::~Brain()
{ std::cout << "Destructor Brain called" << std::endl; }

Brain::Brain(const Brain &cp)
{
	Brain::operator=(cp);
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain	&Brain::operator=(const Brain &oper)
{
	for(int index = 0; index < 100; ++index)
		this->ideas[index] = oper.ideas[index];
	std::cout << "Brain assignation operator overload called" << std::endl;
	return (*this);
}
