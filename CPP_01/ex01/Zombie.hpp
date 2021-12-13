//
// Created by Advisor Woods on 12/11/21.
//

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{

private:
	std::string	m_name;

public:
	Zombie();
	~Zombie();

	void announce();
	void assign_name(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif