//
// Created by Advisor Woods on 1/15/22.
//

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"

class Character : public ICharacter
{
protected:
	AMateria	*materias[4]; //Инвентарь Персонажа состоит не более чем из 4 Материй, изначально пустых.
								// Он экипирует Материю в слоты с 0 по 3, в этом порядке.
	std::string	types;

public:
	Character(std::string types);
	Character(Character const &cp);
	Character &operator=(Character const &oper);
	~Character();

	std::string const	& getName() const;
	void	equip(AMateria* m);
	void	unequip(int idx); // Метод unequip НЕ должен удалять Материю!
	void	use(int idx, ICharacter& target); // должен будет использовать Материю в слоте idx и
										// передать target в качестве параметра методу AMateria::use.

};

#endif