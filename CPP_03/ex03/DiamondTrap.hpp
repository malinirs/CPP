#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string	name;

public:
	DiamondTrap();
	DiamondTrap(std::string const &name);
	DiamondTrap(DiamondTrap const &copy);
	DiamondTrap &operator=(DiamondTrap const &oper); // перегрузка
	~DiamondTrap();

	virtual void	attack(std::string const &target); //virtual делает ф общей для использования в родителе
	virtual void	takeDamage(unsigned int amount);
	virtual void	beRepaired(unsigned int amount);
	void	whoAmI();
};

#endif
