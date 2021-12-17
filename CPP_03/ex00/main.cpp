#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	malinka("Malinka");
	ClapTrap	nameless;

//	nameless = malinka;
	malinka.attack("Death");
	malinka.takeDamage(2);
	malinka.beRepaired(1);
//	std::cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
//	nameless.attack("Live");
//	nameless.takeDamage(5);
//	nameless.beRepaired(7);
	return (0);
}