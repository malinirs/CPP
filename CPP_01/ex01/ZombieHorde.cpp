#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *all = new (std::nothrow) Zombie[N];
	if (!all)
	{
		std::cout << "Memory allocation error";
		return (NULL);
	}
	for (int i = 0; i < N; i++)
		all[i].assign_name(name);
	return (all);
}
