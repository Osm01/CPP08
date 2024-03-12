
#include "easyfind.tpp"

class test
{
public:
	void	fun()
	{
		std::cout << "ahmed'";
	}
};

int main(void)
{
	test *t = new test;
	*t->fun();
//	std::cout << "---------| VECTOR |------------" << std::endl;
//	{
//		std::vector<int> a;
//		a.push_back(0);
//		a.push_back(1);
//		a.push_back(2);
//		a.push_back(3);
//		a.push_back(4);
//		try
//		{
//			easyfind<std::vector<int> >(a, 1);
//		}
//		catch (std::exception &e)
//		{
//			std::cout << RED << e.what() << RESET << std::endl;
//		}
//	}
//	std::cout << "---------| LIST |------------" << std::endl;
//	{
//		std::list<int> l;
//		l.push_back(0);
//		l.push_back(1);
//		l.push_back(2);
//		l.push_back(3);
//		l.push_back(4);
//		try
//		{
//			easyfind<std::list<int> >(l, 10);
//		}
//		catch (std::exception &e)
//		{
//			std::cout << RED << e.what() << RESET << std::endl;
//		}
//	}
	return 0;
}