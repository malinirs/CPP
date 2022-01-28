//
// Created by Advisor Woods on 1/24/22.
//

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <list>

template <typename TypeName>
class MutantStack : public std::stack<TypeName>
{
public:
	MutantStack() {};
	MutantStack(MutantStack const &cp) { operator=(cp); };
	MutantStack &operator=(MutantStack const &oper) { *this = oper; return (*this); };
	~MutantStack() {};

	typedef typename std::stack<TypeName>::container_type::iterator	iterator;

	iterator	begin() { return (this->c.begin()); };
	iterator	end() { return (this->c.end()); };
};

#endif

// stack— это тип адаптера контейнера, специально разработанный для работы в контексте LIFO
// (последний пришел — первый ушел), когда элементы вставляются и извлекаются только с одного конца контейнера.