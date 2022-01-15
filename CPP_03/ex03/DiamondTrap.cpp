#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap ("", 100, 50, 30), ScavTrap(), FragTrap(), name("0001")
{
	ClapTrap::name = this->name + "_clap_name";
	std::cout << "DiamondTrap constructor called" << std::endl;
}
DiamondTrap::~DiamondTrap() { std::cout << "Destructor DiamondTrap called" << std::endl; }

DiamondTrap::DiamondTrap(std::string const &name) : ClapTrap (name + "_clap_name", 100, 50 ,30), ScavTrap(name), FragTrap(name), name(name)
{ std::cout << "DiamondTrap new constructor " << this->name << " called" << std::endl; }

DiamondTrap::DiamondTrap(DiamondTrap const &oper)
: ClapTrap (oper.name + "_clap_name", 100, 50, 30), ScavTrap(oper.name), FragTrap(oper.name), name(oper.name)
{ std::cout << "DiamondTrap copy constructor called" << std::endl; }

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &oper)
{
	this->eng_points = oper.eng_points;
	this->attack_dmg = oper.attack_dmg;
	this->hitpoints = oper.hitpoints;
	this->name = oper.name;
	std::cout << "DiamondTrap " << oper.name << " got his stats" << std::endl;
	return (*this);
}

void	DiamondTrap::attack(std::string const &target)
{ ScavTrap::attack(target); }

void	DiamondTrap::takeDamage(unsigned int amount)
{
	std::cout << "DiamondTrap " << this->name << " take damage " << amount;
	std::cout << " points of damage!";
	this->hitpoints = this->hitpoints - amount;
	if (this->hitpoints < 1)
	{
		std::cout << " Oops! DiamondTrap is killed :(";
		this->hitpoints = 0;
	}
	std::cout << std::endl;
}
void	DiamondTrap::beRepaired(unsigned int amount)
{
	std::cout << "DiamondTrap " << this->name << " be repaired ";
	std::cout << amount << " hitpoints!";
	this->hitpoints = this->hitpoints + amount;
	if (this->hitpoints > 99)
	{
		std::cout << " All hitpoints restored :)";
		this->hitpoints = 100;
	}
	std::cout << std::endl;
}
void	DiamondTrap::whoAmI()
{
	std::cout << "I`m " << this->name << ". I`m " << ClapTrap::name << std::endl;
}
