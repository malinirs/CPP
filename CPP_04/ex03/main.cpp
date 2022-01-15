//
// Created by Advisor Woods on 1/14/22.
//

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
// Теперь мы не можем вызвать чистый виртуальный метод makeSound у класса Animal

	std::cout << "*************************" << std::endl;
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();
	std::cout << "*************************" << std::endl;
	j->makeSound();
	i->makeSound();
	std::cout << "*************************" << std::endl;
	delete	j;
	delete	i;
	std::cout << "*************************" << std::endl;
	return (0);
}
