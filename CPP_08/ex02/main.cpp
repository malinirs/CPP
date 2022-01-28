#include "mutantstack.hpp"

//empty	Проверяет, является ли stack пустым.
//Рор	Удаляет элемент из верхней части stack.
//push	Добавляет элемент в верхнюю часть stack.
//size	Возвращает количество элементов в контейнере stack.
//В начало	Возвращает ссылку на элемент в верхней части stack.

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "**************" << std::endl;
	std::cout << "top = " << mstack.top() << std::endl;
	std::cout << "**************" << std::endl;

	mstack.pop();
	std::cout << "size = " << mstack.size() << std::endl;
	std::cout << "top = " << mstack.top() << std::endl;
	std::cout << "**************" << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "**************" << std::endl;

	return (0);
}
