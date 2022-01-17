//
// Created by Advisor Woods on 1/16/22.
//

#ifndef CURE_HPP
# define CURE_HPP

# include <string>
# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(Cure const &cp);
	Cure &operator=(Cure const &oper);
	~Cure();

	AMateria*	clone() const;
	void		use(ICharacter& target);
};

#endif