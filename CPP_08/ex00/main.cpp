// std::vector — это тот же динамический массив, но который может сам управлять выделенной себе памятью.
// std::vector динамически выделяет память для своего содержимого по запросу.
// доступ к элементам массива выполняется через оператор [] (не выполняет проверку диапазона) или через функцию at() (выполняет проверку диапазона)

#include "easyfind.hpp"
#include <vector>

int	main (void)
{
	std::vector<int> array(7);

	for (int index = 0; index < 7; ++index)
		array[index] = index;

	std::cout << "**************************" << std::endl;

	try
	{
		easyfind(array, 0);
		easyfind(array, 12);
	}
	catch (std::exception &e)
	{ std::cout << "*** Sequence not found ***" << std::endl; }

	std::cout << "**************************" << std::endl;

	return (0);
}
