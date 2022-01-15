//
// Created by Advisor Woods on 1/14/22.
//

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class Brain
{
private:
	std::string	ideas[100];

public:
	Brain();
	Brain(Brain const &cp);
	Brain &operator=(Brain const &oper);
	~Brain();
};

#endif