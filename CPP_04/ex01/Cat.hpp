//
// Created by Advisor Woods on 1/14/22.
//

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain	*b_cat; //указатель на массив ideas[100]
public:
	Cat();
	Cat(Cat const &cp);
	Cat	&operator=(Cat const &operat);
	~Cat();

	void	makeSound() const;
};

#endif