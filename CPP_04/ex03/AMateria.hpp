//
// Created by Advisor Woods on 1/15/22.
//

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
protected:
	std::string	type; // тип = имя (Ice и Cure)

public:
	AMateria(std::string const & type);
	AMateria(AMateria const &cp);
	AMateria &operator=(AMateria const &oper);
	virtual ~AMateria();

	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target); //отобразит: • Ice: "* shoots an ice bolt at NAME *"
													// • Cure: "* heals NAME’s wounds *"
};

#endif