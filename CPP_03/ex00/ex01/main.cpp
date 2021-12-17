#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	malinka("Malinka");

	malinka.attack("Death");
	malinka.takeDamage(20);
	malinka.beRepaired(10);
	malinka.guardGate();
	return (0);
}