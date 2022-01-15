#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	*malinka = new DiamondTrap("Malinka");

	malinka->attack("Death");
	malinka->guardGate();
	malinka->highFivesGuys();
	malinka->whoAmI();
	delete malinka;
	return (0);
}