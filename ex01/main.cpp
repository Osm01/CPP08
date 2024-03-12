
#include "Span.h"

int	main(void)
{
//	{
//		Span sp = Span(5);
//
//		sp.addNumber(6);
//		sp.addNumber(3);
//		sp.addNumber(17);
//		sp.addNumber(9);
//		sp.addNumber(11);
//		std::cout << sp.shortestSpan() << std::endl;
//		std::cout << sp.longestSpan() << std::endl;
//	}
	std::cout << "TRY big random value" << std::endl;
	{
		Span sp(15000);
		std::vector<int> a;
		srand(static_cast<unsigned int>(time(0)));
		int i = -1;
		while (++i < 15000)
			a.push_back(static_cast<int>(rand()));
		try
		{
//			sp.addNumber(100);
			sp.add_range(a.begin(), a.end());
			std::cout <<  sp.shortestSpan() << std::endl;
			std::cout << sp << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
//	std::cout << "Try some error's" << std::endl;
//	{
//		Span sp = Span(5);
//		try
//		{
//			sp.addNumber(0);
//			std::cout << sp.shortestSpan() << std::endl;
//			std::cout << sp.longestSpan() << std::endl;
//		}
//		catch (std::exception &e)
//		{
//			std::cout << e.what() << std::endl;
//		}
//	}
//	{
//		Span sp(0);
//		try
//		{
//			sp.addNumber(10);
//			std::cout << sp << std::endl;
//		}
//		catch (std::exception &e)
//		{
//			std::cout << e.what() << std::endl;
//		}
//	}
}