//
// Created by Advisor Woods on 12/16/21.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : hitpoints(10), eng_points(10), attack_dmg(0)
{
	this->name = "0001";
	std::cout << "Default constructor called" << std::endl;
}
ClapTrap::~ClapTrap() { std::cout << "Destructor called" << std::endl; }

ClapTrap::ClapTrap(std::string const &name) : hitpoints(10), eng_points(10), attack_dmg(0)
{
	this->name = name;
	std::cout << "New constructor " << this->name << " called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	ClapTrap::operator=(copy);
}

ClapTrap &ClapTrap::operator=(ClapTrap const &oper)
{
	this->eng_points = oper.eng_points;
	this->attack_dmg = oper.attack_dmg;
	this->hitpoints = oper.hitpoints;
	this->name = oper.name;
	std::cout << oper.name << " got his stats" << std::endl;
	return (*this);
}

void	ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap " << this->name << " attack " << target;
	std::cout << " causing " << this->attack_dmg << " points of damage!" << std::endl;
}
void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name << " take damage " << amount;
	std::cout << " points of damage!";
	this->hitpoints = this->hitpoints - amount;
	if (this->hitpoints < 1)
	{
		std::cout << " Oops! ClapTrap is killed :(";
		this->hitpoints = 0;
	}
	std::cout << std::endl;
}
void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name << " be repaired ";
	std::cout << amount << " hitpoints!";
	this->hitpoints = this->hitpoints + amount;
	if (this->hitpoints > 9)
	{
		std::cout << " All hitpoints restored :)";
		this->hitpoints = 10;
	}
	std::cout << std::endl;
}
