//
// Created by Advisor Woods on 12/17/21.
//

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap ("0001", 100, 100, 30)
{ std::cout << "FragTrap constructor called" << std::endl; }
FragTrap::~FragTrap() { std::cout << "Destructor FragTrap called" << std::endl; }

FragTrap::FragTrap(std::string const &name) : ClapTrap (name, 100, 100 ,30)
{ std::cout << "FragTrap new constructor " << this->name << " called" << std::endl; }

FragTrap::FragTrap(FragTrap const &cp) : ClapTrap (cp.name, cp.hitpoints, cp.eng_points, cp.attack_dmg)
{ std::cout << "FragTrap copy constructor called" << std::endl; }

FragTrap &FragTrap::operator=(FragTrap const &oper)
{
	this->eng_points = oper.eng_points;
	this->attack_dmg = oper.attack_dmg;
	this->hitpoints = oper.hitpoints;
	this->name = oper.name;
	std::cout << "FragTrap " << oper.name << " got his stats" << std::endl;
	return (*this);
}

void	FragTrap::attack(std::string const &target)
{
	std::cout << "FragTrap " << this->name << " attack " << target;
	std::cout << " causing " << this->attack_dmg << " points of damage!" << std::endl;
}
void	FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "FragTrap " << this->name << " take damage " << amount;
	std::cout << " points of damage!";
	this->hitpoints = this->hitpoints - amount;
	if (this->hitpoints < 1)
	{
		std::cout << " Oops! FragTrap is killed :(";
		this->hitpoints = 0;
	}
	std::cout << std::endl;
}
void	FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "FragTrap " << this->name << " be repaired ";
	std::cout << amount << " hitpoints!";
	this->hitpoints = this->hitpoints + amount;
	if (this->hitpoints > 99)
	{
		std::cout << " All hitpoints restored :)";
		this->hitpoints = 100;
	}
	std::cout << std::endl;
}
void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << " high Fives, Guys!" << std::endl;
}
