//
// Created by Advisor Woods on 1/15/22.
//

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(std::string const & type) : type(type)
{ std::cout << "Constructor AMateria called" << std::endl; }

AMateria::~AMateria()
{ std::cout << "Destructor AMateria called" << std::endl; }

std::string const &AMateria::getType() const
{ return (type); }

AMateria::AMateria(const AMateria &cp)
{
	AMateria::operator=(cp);
	std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &oper)
{
	this->type = oper.type;
	std::cout << "AMateria assignation operator overload called" << std::endl;
	return (*this);
}

void AMateria::use(ICharacter &target)
{ std::cout << target.getName() << std::endl; }
