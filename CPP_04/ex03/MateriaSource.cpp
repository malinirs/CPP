//
// Created by Advisor Woods on 1/16/22.
//

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int index = 0; index < 4; ++index)
		this->source_matter[index] = NULL;
	std::cout << "Constructor MateriaSource called" << std::endl;
}

MateriaSource::~MateriaSource()
{
	for (int index = 0; index < 4; ++index)
	{
		if (this->source_matter[index])
			delete this->source_matter[index];
	}
	std::cout << "Destructor MateriaSource called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &cp)
{
	MateriaSource::operator=(cp);
	std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &oper)
{
	for (int index = 0; index < 4; ++index)
		this->source_matter[index] = oper.source_matter[index];
	std::cout << "MateriaSource assignation operator overload called" << std::endl;
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *source)
{
	for (int index = 0; index < 4; ++index)
	{
		if (!this->source_matter[index])
		{
			this->source_matter[index] = source; // передаем указатель на source (материю) - Ice или Cure
			std::cout << "Put in Materia " << source->getType() << "." << std::endl;
			return ;
		}
	}
	std::cout << "Fine! Materia is full!" << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int index = 0; index < 4; index++)
		if (source_matter[index]->getType() == type && source_matter[index])
			return (source_matter[index]->clone());
	std::cout << "Oops! Some new matter!" << std::endl;
	return (NULL);
}