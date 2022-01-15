//
// Created by Advisor Woods on 1/14/22.
//

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();
	const Animal	*copy_Dog = new Dog(*(Dog*)j); // Делаем копию в новую переменную
	const Animal	*copy_Cat = new Cat(*(Cat*)j);
	std::cout << "*******************************************" << std::endl;
	std::cout << "Address Dog(j)      " << j << std::endl;
	std::cout << "Address copy_Dog    " << copy_Dog << std::endl;
	std::cout << "Address Cat(i)      " << i << std::endl;
	std::cout << "Address copy_Cat    " << copy_Cat << std::endl;
	std::cout << "*******************************************" << std::endl;
	delete	j;
	delete	i;
	delete	copy_Dog;
	delete	copy_Cat;
	std::cout << "*******************************************" << std::endl;
	return (0);
}
