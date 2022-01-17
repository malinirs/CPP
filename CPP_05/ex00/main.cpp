#include "Bureaucrat.hpp"

//	try //пытаться
//	{
//		/* делать что-то с бюрократами */
//	}
//	catch (std::exception & e) //поймать
//	{
//		/* обработка исключения */
//	}

//Блок try действует как наблюдатель в поисках исключений, которые были выброшены каким-либо из операторов в этом же блоке try.
//Обратите внимание, блок try не определяет, КАК мы будем обрабатывать исключение. Он просто сообщает компилятору:
// «Эй, если какой-либо из стейтментов внутри этого блока try сгенерирует исключение — поймай его!».

//Ключевое слово catch используется для определения блока кода (так называемого «блока catch»), который обрабатывает
// исключения определенного типа данных.

// !!! Компилятор не выполняет неявные преобразования при сопоставлении исключений с блоками catch! Например, исключение
// типа char не будет обрабатываться блоком catch типа int, а исключение типа int, в свою очередь, не будет
// обрабатываться блоком catch типа float.

// По заданию 3 + 1 = 2. Поэтому increase --, а decrease ++.

// В C++ может быть вызван любой тип; Однако рекомендуется создавать тип, прямо или косвенно производный от std::exception

int	main(void)
{
	std::cout << "*****************************************" << std::endl;

	try
	{
		Bureaucrat	Malinka("Malinla", 2);
		std::cout << Malinka << std::endl;
		Malinka.increase_value();
		std::cout << Malinka << std::endl;
		Malinka.increase_value();
		std::cout << Malinka << std::endl;
		Malinka.decrease_value();
		std::cout << Malinka << std::endl;
	}
	catch (std::exception & e)
	{ std::cout << e.what() << std::endl; }

	std::cout << "*****************************************" << std::endl;

	try
	{
		Bureaucrat	Berry("Berry", 149);
		std::cout << Berry << std::endl;
		Berry.decrease_value();
		std::cout << Berry << std::endl;
		Berry.decrease_value();
		std::cout << Berry << std::endl;
		Berry.increase_value();
		std::cout << Berry << std::endl;
	}
	catch (std::exception & e)
	{ std::cout << e.what() << std::endl; }

	std::cout << "*****************************************" << std::endl;

	try
	{
		Bureaucrat	Candy("Candy", 75);
		std::cout << Candy << std::endl;
		Candy.decrease_value();
		std::cout << Candy << std::endl;
		Candy.increase_value();
		std::cout << Candy << std::endl;
		Candy.increase_value();
		std::cout << Candy << std::endl;
	}
	catch (std::exception & e)
	{ std::cout << e.what() << std::endl; }

	std::cout << "*****************************************" << std::endl;

	return (0);
}
