//
// Created by Advisor Woods on 12/17/21.
//

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string const &name);
	ScavTrap(ScavTrap const &copy);
	ScavTrap &operator=(ScavTrap const &oper); // перегрузка
	virtual ~ScavTrap();

	virtual void	attack(std::string const &target); //virtual делает ф общей для использования в родителе
	virtual void	takeDamage(unsigned int amount);
	virtual void	beRepaired(unsigned int amount);
	void	guardGate(); //сообщает, что FragTrap вошел в режим Gate keeper
};

#endif