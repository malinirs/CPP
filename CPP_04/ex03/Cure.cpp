//
// Created by Advisor Woods on 1/16/22.
//

#include "Cure.hpp"

Cure::Cure():AMateria("Cure")
{ std::cout << "Constructor Cure called" << std::endl; }

Cure::~Cure()
{ std::cout << "Destructor Cure called" << std::endl; }

Cure::Cure(const Cure &cp): AMateria(cp.type)
{
	Cure::operator=(cp);
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &oper)
{
	if (this != &oper)
		this->type = oper.type;
	std::cout << "Cure assignation operator overload called" << std::endl;
	return (*this);
}

void	Cure::use(ICharacter &target)
{ std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl; }

AMateria*	Cure::clone() const
{
	AMateria	*temp = new Cure();
	return (temp);
}
