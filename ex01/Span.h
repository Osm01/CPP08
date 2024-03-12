//
// Created by ouidriss on 3/4/24.
//

#ifndef CPP08_SPAN_H
#define CPP08_SPAN_H

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define PURPLE "\033[35m"
# define CYAN "\033[36m"
# define RESET "\033[0m"

class Span {
private :
	std::vector<int>	data;
	unsigned int		size;
public :
	Span(unsigned int N);
	Span(const Span &s);
	Span			&operator=(const Span &s);
	void			addNumber(int value);
	void			add_range(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	int				shortestSpan();
	int				longestSpan();
	std::vector<int>	&get_data(void);
	~Span();
};

std::ostream	&operator<<(std::ostream &out , Span &sp);


#endif //CPP08_SPAN_H
