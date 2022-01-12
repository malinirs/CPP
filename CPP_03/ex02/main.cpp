#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	malinka("Malinka");

	malinka.attack("Death");
	malinka.takeDamage(80);
	malinka.beRepaired(90);
	malinka.highFivesGuys();
	return (0);
}