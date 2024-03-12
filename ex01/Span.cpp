//
// Created by ouidriss on 3/4/24.
//

#include "Span.h"

Span::Span(unsigned int N) : size(N)
{
	std::cout <<  GREEN << "Calling Parameter constructor of span" << RESET << std::endl;
}

Span::Span(const Span &s)
{
	std::cout << YELLOW << "Calling copy constructor of span" << RESET << std::endl;
	*this = s;
}

Span &Span::operator=(const Span &s){
	std::cout << BLUE << "Calling copy operator overloading of span" << RESET << std::endl;
	if (this != &s)
	{
		this->data = s.data;
		this->size = s.size;
	}
	return (*this);
}

void Span::addNumber(int value)
{
	if (this->data.size() >= this->size)
		throw std::runtime_error("Not enough space");
	this->data.push_back(value);
}

int	Span::shortestSpan()
{
	if (data.size() <= 1)
		throw std::runtime_error("no span can be found or size is 1");
	std::vector<int> tmp = this->data;
	std::sort(tmp.begin(), tmp.end());
	int	shortest = std::abs(tmp[0] - tmp[1]);
	unsigned int i = 0;
	while (i < data.size() - 1)
	{
		if (shortest > std::abs(tmp[i] - tmp[i + 1]))
			shortest = std::abs(tmp[i] - tmp[i + 1]);
		i ++;
	}
	return shortest;
}

int Span::longestSpan()
{
	if (data.size() <= 1)
		throw std::runtime_error("no span can be found or size is 1");
	std::vector<int> tmp = this->data;
	std::sort(tmp.begin(), tmp.end());
	int	longest = std::abs(tmp[0] - tmp[tmp.size() - 1]);
	return longest;
}

void Span::add_range(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	unsigned int size = std::distance(begin, end);
	if (size > this->size - this->data.size())
		throw std::runtime_error("size too big to fill remaining space");
	this->data.insert(data.end(), begin, end);
}

std::vector<int> &Span::get_data()
{
	return (this->data);
}

std::ostream	&operator<<(std::ostream &out , Span &sp)
{
	std::cout << "size of data : " << sp.get_data().size();
	return (out);
}

Span::~Span()
{
	std::cout << RED << "Calling destructor of span" << RESET << std::endl;
}