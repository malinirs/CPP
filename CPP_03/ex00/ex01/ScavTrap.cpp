//
// Created by Advisor Woods on 12/17/21.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap ("0001", 100, 50, 20)
{ std::cout << "ScavTrap constructor called" << std::endl; }
ScavTrap::~ScavTrap() { std::cout << "Destructor ScavTrap called" << std::endl; }

ScavTrap::ScavTrap(std::string const &name) : ClapTrap (name, 100, 50 ,20)
{ std::cout << "ScavTrap new constructor " << this->name << " called" << std::endl; }

ScavTrap::ScavTrap(ScavTrap const &cp) : ClapTrap (cp.name, cp.hitpoints, cp.eng_points, cp.attack_dmg)
{ std::cout << "ScavTrap copy constructor called" << std::endl; }

ScavTrap &ScavTrap::operator=(ScavTrap const &oper)
{
	this->eng_points = oper.eng_points;
	this->attack_dmg = oper.attack_dmg;
	this->hitpoints = oper.hitpoints;
	this->name = oper.name;
	std::cout << "ScavTrap " << oper.name << " got his stats" << std::endl;
	return (*this);
}

void	ScavTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap " << this->name << " attack " << target;
	std::cout << " causing " << this->attack_dmg << " points of damage!" << std::endl;
}
void	ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "ScavTrap " << this->name << " take damage " << amount;
	std::cout << " points of damage!";
	this->hitpoints = this->hitpoints - amount;
	if (this->hitpoints < 1)
	{
		std::cout << " Oops! ScavTrap is killed :(";
		this->hitpoints = 0;
	}
	std::cout << std::endl;
}
void	ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "ScavTrap " << this->name << " be repaired ";
	std::cout << amount << " hitpoints!";
	this->hitpoints = this->hitpoints + amount;
	if (this->hitpoints > 9)
	{
		std::cout << " All hitpoints restored :)";
		this->hitpoints = 10;
	}
	std::cout << std::endl;
}
void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " guard Gate" << std::endl;
}
