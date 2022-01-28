#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>

// Функция find ищет последовательность заданных символов в заданной строке, и возвращает количество
// символов стоящих перед заданными символом(ами) которые мы искали.

// Итератор — это объект, который способен перебирать элементы контейнерного класса без необходимости пользователю
// знать реализацию определенного контейнерного класса. container::iterator — итератор для чтения/записи

template<typename T>
typename T::iterator easyfind(T &array, int numer)
{
	typename T::iterator	result;

	result = std::find(array.begin(), array.end(), numer);
	if (result == array.end())
		throw std::exception();
	std::cout << "***   Sequence found   ***" << std::endl;
	return (result);
}

#endif