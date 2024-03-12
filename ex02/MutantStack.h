//
// Created by ouidriss on 3/6/24.
//

#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H

#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <deque>
#include <algorithm>
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define PURPLE "\033[35m"
# define CYAN "\033[36m"
# define RESET "\033[0m"

template <typename T, class CONTAINER = std::deque<T> >
class	MutantStack : public std::stack<T, CONTAINER>
{
public :
	typedef typename CONTAINER::iterator	iterator;
	MutantStack();
	MutantStack(const MutantStack<T, CONTAINER> &m);
	MutantStack<T, CONTAINER>	&operator=(const MutantStack<T, CONTAINER> &m);
	~MutantStack();
	typename CONTAINER::iterator	begin();
	typename CONTAINER::iterator	end();
};

#endif //CPP08_MUTANTSTACK_H
