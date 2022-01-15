//
// Created by Advisor Woods on 1/15/22.
//

#include "Character.hpp"

Character::Character(std::string const & type) : type(type)
{
	for (int index = 0; index < 4; ++index)
		this->materias[index] = 0x0;
	std::cout << "Constructor Character called" << std::endl;
}

Character::~Character()
{
	for (int index = 0; index < 4; ++index)
	{
		if (this->materias[index])
			delete this->materias[index];
	}
	std::cout << "Destructor Character called" << std::endl;
}

std::string const &Character::getName() const
{ return (this->types); }

Character::Character(const Character &cp)
{
	Character::operator=(cp);
	std::cout << "Character copy constructor called" << std::endl;
}

Character &Character::operator=(const Character &oper)
{
	this->type = oper.type;
	for (int index = 0; index < 4; ++index)
		this->materias[index] = oper.materias[index];
	std::cout << "Character assignation operator overload called" << std::endl;
	return (*this);
}

void	Character::equip(AMateria* m)
{
	for (int index = 0; index < 4; ++index)
	{
		if (!this->materias[index])
		{
			this->materias[index] = m; // передаем указатель на тип - Ice или Cure
			std::cout << "Put in inventory " << m->getType() << "." << std::endl;
			return ;
		}
	}
	std::cout << "Fine! Inventory is full!" << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx >= 4 || idx <= -1)
	{
		std::cout << "Oops! Inventory index error!" << std::endl;
		return ;
	}
	std::cout << "Move matter with index " << idx << " type " << materias[idx]->getType() << std::endl;
	this->materias[idx] = 0x0;

}

void	Character::use(int idx, ICharacter& target)
{
	if (!this->materias[index])
	{
		std::cout << "Oh! No such material has been found.!" << std::endl;
		return ;
	}
	if (idx >= 4 || idx <= -1)
	{
		std::cout << "Oh! Inventory index error!" << std::endl;
		return ;
	}
	this->materias[idx]->use(target);
}
