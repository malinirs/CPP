//
// Created by Advisor Woods on 1/14/22.
//

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal	*meta = new Animal();
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();

	std::cout << "*************************" << std::endl;
	std::cout << j->getType() << " - this is the type" << std::endl;
	std::cout << i->getType() << " - this is the type" << std::endl;
	std::cout << "*************************" << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << "*************************" << std::endl;
	delete j;
	delete i;
	delete meta;

	std::cout << "*************************" << std::endl << std::endl;
	const WrongAnimal	*a = new WrongAnimal();
	const WrongAnimal	*c = new WrongCat();
	std::cout << "++++++++++++++++++++++++++++++" << std::endl;
	std::cout << a->getType() << " - this is the type" << std::endl;
	std::cout << c->getType() << " - this is the type" << std::endl;
	std::cout << "++++++++++++++++++++++++++++++" << std::endl;
	a->makeSound();
	c->makeSound();
	std::cout << "++++++++++++++++++++++++++++++" << std::endl;
	delete c;
	delete a;

	return (0);
}