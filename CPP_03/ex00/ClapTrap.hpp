//
// Created by Advisor Woods on 12/16/21.
//

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
private:
	std::string		name; //(Parameter of constructor)
	int				hitpoints;
	unsigned int	eng_points;
	unsigned int	attack_dmg;

public:
	ClapTrap();
	ClapTrap(std::string const &name);
	ClapTrap(ClapTrap const &copy); //const, чтобы не было рекурсивного вызова конструктора копирования
	ClapTrap &operator=(ClapTrap const &oper); // перегрузка
	~ClapTrap();

	void	attack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

// по крайней мере, один конструктор по умолчанию, конструктор копирования,
// перегрузка оператора присваивания и деструктор.

#endif