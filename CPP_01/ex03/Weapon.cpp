//
// Created by Advisor Woods on 12/12/21.
//

#include "Weapon.hpp"

Weapon::Weapon(std::string const &type)
{
	this->m_type = type;
}
Weapon::~Weapon() {};

std::string const &Weapon::getType() // использ для получения m_type при атаке
{
	return m_type;
}

void Weapon::setType(std::string const &type)
{
	m_type = type;
}