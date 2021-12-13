//
// Created by Advisor Woods on 12/11/21.
//

#include "Zombie.hpp"

Zombie::Zombie() : m_name("Malinkaaaa") {}
Zombie::~Zombie()
{
	std::cout << this->m_name << " is dead" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->m_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::assign_name(std::string name)
{
	this->m_name = name;
}