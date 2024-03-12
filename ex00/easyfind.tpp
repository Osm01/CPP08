
#ifndef EASYFIND_TPP
#define EASYFIND_TPP

#include "easyfind.h"

template <typename T>
void	easyfind(T &container, int value)
{
	typename T::iterator it;
	for (it = container.begin(); it != container.end() ; it ++)
	{
		if (*it == value)
			return (static_cast<void>(std::cout << GREEN << "Found the value" << RESET << std::endl));
	}
	throw std::runtime_error("Value not founded");
}

#endif //EASYFIND_TPP