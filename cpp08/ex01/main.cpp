#include "Span.hpp"
#include <iostream>

int main()
{
	{
		Span sp = Span(5);

		try
		{
			sp.addNumber(5);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		Span sp = Span(10000);
		std::vector<int> v;

		// 1 to 9999
		for (int i = 1; i < 10000; i++)
			v.push_back(i);
		// 20000 at the very end, which means shortest span is 1 and longest span is 10001
		v.push_back(20000);

		try
		{
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		try
		{
			sp.addNumber(v.begin(), v.end());
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
}