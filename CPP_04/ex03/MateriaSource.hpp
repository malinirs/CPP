//
// Created by Advisor Woods on 1/16/22.
//

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

# include <string>
# include <iostream>
# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria	*source_matter[4];

public:
	MateriaSource();
	MateriaSource(MateriaSource const &cp);
	MateriaSource &operator=(MateriaSource const &oper);
	~MateriaSource();

	void		learnMateria(AMateria*);
	AMateria*	createMateria(std::string const & type);
};

#endif