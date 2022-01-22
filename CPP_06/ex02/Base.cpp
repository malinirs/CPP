//
// Created by Advisor Woods on 1/22/22.
//

#include "Base.hpp"
#include <cstdlib>

Base::~Base() { std::cout << "Destructor Base called" << std::endl; }

// Функция srand() используется для установки начала последовательности, генерируемой функцией rand()
// (функция rand() возвращает случайные числа).

Base	*generate(void)
{
	srand(time(0x0));
	switch (rand() % 3)
	{
		case 0:
			return (new A);
		case 1:
			return (new B);
		case 2:
			return (new C);
	}
	return (0x0);
}

// dynamic_cast преобразует тип данных вверх по иерархии наследования (из типа-потомка в тип-предка)
void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Real type class A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Real type class B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Real type class C" << std::endl;
	else
		std::cout << "No real class type" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		Base	&a = dynamic_cast<A&>(p);
		std::cout << "Real type class A" << std::endl;
		(void)a;
	}
	catch (std::exception & e) { (void)e; }

	try
	{
		Base	&b = dynamic_cast<B&>(p);
		std::cout << "Real type class B" << std::endl;
		(void)b;
	}
	catch (std::exception & e) { (void)e; }

	try
	{
		Base	&c = dynamic_cast<C&>(p);
		std::cout << "Real type class C" << std::endl;
		(void)c;
	}
	catch (std::exception & e) { (void)e; }
}
