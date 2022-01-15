//
// Created by Advisor Woods on 1/14/22.
//

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(Dog const &cp);
	Dog	&operator=(Dog const &operat);
	virtual ~Dog();

	virtual void	makeSound() const;
};

#endif