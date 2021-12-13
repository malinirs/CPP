//
// Created by Advisor Woods on 12/12/21.
//

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>

//Создайте класс Weapon, который имеет строку type и метод getType, который
//возвращает const ссылку на эту строку. Конечно, у него также есть setType!

class Weapon
{
private:
	std::string m_type;
public:
	Weapon(std::string const &);
	~Weapon();
	
	std::string const &getType();
	void setType(std::string const &);
};

#endif