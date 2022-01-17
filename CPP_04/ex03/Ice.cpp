//
// Created by Advisor Woods on 1/16/22.
//

#include "Ice.hpp"

Ice::Ice():AMateria("Ice")
{ std::cout << "Constructor Ice called" << std::endl; }

Ice::~Ice()
{ std::cout << "Destructor Ice called" << std::endl; }

Ice::Ice(const Ice &cp): AMateria(cp.type)
{
	Ice::operator=(cp);
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &oper)
{
	if (this != &oper)
		this->type = oper.type;
	std::cout << "Cure assignation operator overload called" << std::endl;
	return (*this);
}

void	Ice::use(ICharacter &target)
{ std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl; }

AMateria*	Ice::clone() const
{
	AMateria	*temp = new Ice();
	return (temp);
}
