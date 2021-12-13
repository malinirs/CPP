#include "Zombie.hpp"

int main(void)
{
	int	N = 6;
	Zombie	*all = zombieHorde(N, "Malinka");
	if (!all)
		return (1);
	for (int i = 0; i < N; i++)
		all[i].announce();
	delete [] all;
	all = NULL;
	return (0);
}