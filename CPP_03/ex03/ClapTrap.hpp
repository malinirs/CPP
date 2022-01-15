//
// Created by Advisor Woods on 12/16/21.
//

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
protected:
	int				hitpoints;
	unsigned int	eng_points;
	unsigned int	attack_dmg;
	ClapTrap(std::string const &name, int hitpoints, unsigned int eng_points, unsigned int attack_dmg);

	std::string		name;
public:
	ClapTrap();
	ClapTrap(std::string const &name);
	ClapTrap(ClapTrap const &copy);
	ClapTrap &operator=(ClapTrap const &oper); // перегрузка
	virtual ~ClapTrap();

	virtual void	attack(std::string const &target);
	virtual void	takeDamage(unsigned int amount);
	virtual void	beRepaired(unsigned int amount);
};

// по крайней мере, один конструктор по умолчанию, конструктор копирования,
// перегрузка оператора присваивания и деструктор.

#endif
