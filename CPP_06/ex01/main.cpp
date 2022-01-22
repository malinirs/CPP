#include <string>
#include <iostream>

typedef struct	Data
{
	std::string	name1;
	int			age;
}				s_Data;

// !!! Сериализация - процесс сохраненич какого-то об-та за пределами программы в некотором хранилище с возможностью восстановления (десериализации) !!!

// uintptr_t - это целочисленный тип без знака, который хранит указатель данных. Обычно это означает, что он того же размера, что и указатель.
// reinterpret_cast позволяет представить произвольный объект в виде последовательности байт

uintptr_t serialize(Data* ptr) // вернет параметр в целочисленном типе.
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw) // вернет необработанные данные, созданные вами с помощью «сериализации», в структуру данных.
{
	return (reinterpret_cast<Data*>(raw));
}

int	main()
{
	Data	*person = new Data;

	person->name1 = "Malinka";
	person->age = 25;

	std::cout << "****************************************" << std::endl;
	std::cout << "Name: " << person->name1 << ". Age: " << person->age << std::endl;
	std::cout << "----------------------------------------" << std::endl;

	std::cout << "Address before (person): " << person << std::endl;
	uintptr_t	box = serialize(person);
	std::cout << "Address during (box)   : " << box << std::endl;
	Data		*clone = deserialize(box);
	std::cout << "Address after (clone)  : " << clone << std::endl;


	std::cout << "----------------------------------------" << std::endl;
	std::cout << "Clone name: " << clone->name1 << ". Clone age: " << clone->age << std::endl;
	std::cout << "****************************************" << std::endl;

	delete person;
}
