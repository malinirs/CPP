//
// Created by Advisor Woods on 12/12/21.
//

#include "HumanA.hpp"

HumanA::HumanA(std::string const &nick, Weapon &weapon) : m_name (nick), m_Weapon(weapon) {} ;
HumanA::~HumanA() {};

void HumanA::attack(void)
{
	std::cout << m_name << " attacks with his ";
	std::cout << m_Weapon.getType() << std::endl;
}