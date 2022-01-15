//
// Created by Advisor Woods on 1/14/22.
//

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain	*b_dog;
public:
	Dog();
	Dog(Dog const &cp);
	Dog	&operator=(Dog const &operat);
	~Dog();

	void	makeSound() const;
};

#endif