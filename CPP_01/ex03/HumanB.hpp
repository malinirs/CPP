//
// Created by Advisor Woods on 12/12/21.
//

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

//Теперь создайте два класса, HumanA и HumanB, у каждого из которых есть
// Weapon, имя и функция attack (), которая отображает: NAME attacks with his WEAPON_TYPE
//В то время как HumanA принимает Оружие в своем конструкторе, HumanB - нет.
// HumanB не всегда может иметь оружие, но HumanA ВСЕГДА будет вооружен.

class HumanB
{
private:
	std::string	m_name;
	Weapon		*m_Weapon;
public:
	HumanB(std::string const &);
	~HumanB();

	void	attack(void);
	void	setWeapon(Weapon &);
};


#endif