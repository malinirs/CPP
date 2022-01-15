//
// Created by Advisor Woods on 1/14/22.
//

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(Cat const &cp);
	Cat	&operator=(Cat const &operat);
	virtual ~Cat();

	virtual void	makeSound() const;
};


#endif