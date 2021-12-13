//
// Created by Advisor Woods on 12/12/21.
//


#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

//Теперь создайте два класса, HumanA и HumanB, у каждого из которых есть
// Weapon, имя и функция attack (), которая отображает: NAME attacks with his WEAPON_TYPE
//В то время как HumanA принимает Оружие в своем конструкторе, HumanB - нет.
// HumanB не всегда может иметь оружие, но HumanA ВСЕГДА будет вооружен.

class HumanA
{
private:
	std::string	m_name;
	Weapon		&m_Weapon;
public:
	HumanA(std::string const &, Weapon &);
	~HumanA();

	void	attack(void);
};

#endif