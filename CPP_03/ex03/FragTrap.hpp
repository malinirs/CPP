//
// Created by Advisor Woods on 12/17/21.
//

#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

# include "ClapTrap.hpp"


class FragTrap : virtual public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string const &name);
	FragTrap(FragTrap const &copy);
	FragTrap &operator=(FragTrap const &oper); // перегрузка
	virtual ~FragTrap();

	virtual void	attack(std::string const &target); //virtual делает ф общей для использования в родителе
	virtual void	takeDamage(unsigned int amount);
	virtual void	beRepaired(unsigned int amount);
	void	highFivesGuys(void);
};

#endif