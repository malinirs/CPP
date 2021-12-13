#include "Zombie.hpp"

Zombie::Zombie(std::string str) : m_name(str) {}
Zombie::~Zombie()
{
	std::cout << this->m_name << " is dead" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->m_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
