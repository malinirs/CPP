#include "Zombie.hpp"

int	main(void)
{
	Zombie	*first = newZombie("Malinka");
	if (!first)
		return (1);
	first->announce();
	randomChump("Iris");
	delete first;
	first = NULL;
	return (0);
}
