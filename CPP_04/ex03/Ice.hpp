//
// Created by Advisor Woods on 1/16/22.
//

#ifndef ICE_HPP
# define ICE_HPP

# include <string>
# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice: public AMateria
{
public:
	Ice();
	Ice(Ice const &cp);
	Ice &operator=(Ice const &oper);
	~Ice();

	AMateria*	clone() const;
	void		use(ICharacter& target);
};

#endif