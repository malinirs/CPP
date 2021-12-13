#include "Zombie.hpp"

Zombie*	newZombie(std::string name)
{
	Zombie	*first;

	first = new (std::nothrow) Zombie(name);
	if (!first)
		std::cout << "Memory allocation error";
	return (first);
}
