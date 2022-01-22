//
// Created by Advisor Woods on 1/22/22.
//

#ifndef BASE_HPP
# define BASE_HPP

# include <string>
# include <iostream>

class Base
{
public:
	virtual ~Base();
};

class A : public Base
{};

class B : public Base
{};

class C : public Base
{};

Base	*generate(void); // случайным образом создает экземпляры A, B или C
void	identify(Base* p); // отображает «A», «B» или «C» в соответствии с реальным типом p
void	identify(Base& p); // тоже самое, но нельзя использовать указатели

#endif