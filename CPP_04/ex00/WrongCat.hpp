//
// Created by Advisor Woods on 1/14/22.
//

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(WrongCat const &cp);
	WrongCat &operator=(WrongCat const &oper);
	~WrongCat();

	void	makeSound() const;
};

#endif