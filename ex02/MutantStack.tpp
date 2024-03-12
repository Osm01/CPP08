#include "MutantStack.h"

template <typename T, class CONTAINER>
MutantStack<T, CONTAINER>::MutantStack() : std::stack<T, CONTAINER>()
{
	std::cout << GREEN << "Calling default constructor" << RESET << std::endl;
}

template <typename T, class CONTAINER>
MutantStack<T, CONTAINER>::~MutantStack()
{
	std::cout << RED << "Calling destructor" << RESET << std::endl;
}

template <typename T, class CONTAINER >
MutantStack<T, CONTAINER>::MutantStack(const MutantStack<T, CONTAINER> &m)
{
	*this = m;
}

template <typename T, class CONTAINER>
MutantStack<T, CONTAINER> &MutantStack<T, CONTAINER>::operator=(const MutantStack<T, CONTAINER> &m)
{
	if (this != &m)
	{
		std::stack<T, CONTAINER>::operator=(m);
	}
	return (*this);
}

template <typename T, class CONTAINER>
typename CONTAINER::iterator	MutantStack<T, CONTAINER>::begin()
{
	return (this->c.begin());
}

template <typename T, class CONTAINER>
typename CONTAINER::iterator	MutantStack<T, CONTAINER>::end()
{
	return (this->c.end());
}