//
// Created by Advisor Woods on 12/12/21.
//

#include "HumanB.hpp"

HumanB::HumanB(std::string const &nick) : m_name (nick) {} ;
HumanB::~HumanB() {};

void HumanB::attack(void)
{
	if (m_Weapon)
	{
		std::cout << m_name << " attacks with his ";
		std::cout << m_Weapon->getType() << std::endl;
	}
	else
		std::cout << m_name << " has no weapon in his hands" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	m_Weapon = &weapon;
}
