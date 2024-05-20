/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 17:03:38 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/02/28 21:16:00 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


void	TestCpyConstructorAssignOperator()
{
	try
	{
		std :: cout << "TEST Cpy Constructor AssignOperator <<Orthodox>>" << std :: endl;
		srand(time(0));
		Span sp(4);
		for(int i = 0; i < 4 ; i++)
			sp.addNumber(rand());
		std :: cout << "Elements of span : " << std :: endl;
		const std::vector< int>& vec = sp.getVec();
		for(std::vector< int>:: const_iterator it = vec.begin(); it != vec.end(); ++it)
			std :: cout << *it << "\t";
		std :: cout << "\nshortestSpan ==>	" << sp.shortestSpan()	<< std :: endl;
		std :: cout << "longestSpan ==>	" << sp.longestSpan()	<< std :: endl;
		std :: cout << "*******************CPY CONSTRUCTOR*****************" << std :: endl;
		Span cpySpan(sp);
		std :: cout << "\nshortestSpan ==>	" << sp.shortestSpan()	<< std :: endl;
		std :: cout << "longestSpan ==>	" << sp.longestSpan()	<< std :: endl;
		std :: cout << "*******************ASSIGN OPERATOR*****************" << std :: endl;
		Span ASpan(0);
		ASpan = cpySpan;
		std :: cout << "\nshortestSpan ==>	" << sp.shortestSpan()	<< std :: endl;
		std :: cout << "longestSpan ==>	" << sp.longestSpan()	<< std :: endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}


void	Test_100000_Number()
{
	try
	{
		std :: cout << "TEST 100000 NUMBER" << std :: endl;
		srand(time(0));
		Span sp(100000);
		for( int i = 0; i < 100000; i++)
			sp.addNumber(rand());
		std :: cout << "\nshortestSpan ==>	" << sp.shortestSpan()	<< std :: endl;
		std :: cout << "longestSpan ==>	" << sp.longestSpan()	<< std :: endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	TestNegativeSize()
{
	std :: cout << "TEST NEGATIVE SIZE" << std :: endl;
	try
	{
		Span S(-9);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	TestOutRange()
{
	try
	{
		std :: cout << "Test Out range of Container" << std :: endl;
		Span  sp(1);
		sp.addNumber(6);
		sp.addNumber(-6);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}


void	TestElement1()
{
	try
	{
		std :: cout << "TestElement1" << std :: endl;
		Span  sp(2);
		std :: cout << sp.longestSpan() << std :: endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	TestElement2()
{
	try
	{
		std :: cout << "TestElement2" << std :: endl;
		Span  sp(1);
		std :: cout << sp.longestSpan() << std :: endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}


void	TestAddrangeElemet()
{
	try
	{
		std :: cout << "Test-ADD-RANGE-ELEMENT" << std :: endl;
		Span sp = Span(10);
		std::vector<int> vect;
		for (int i = 0; i < 5; i++)
			vect.push_back(i);
		for (int i = 0; i < 5; i++)
				sp.addNumber(i);
		sp.AddRangeNumber(vect.begin(), vect.end());
		const std::vector< int>& vec = sp.getVec();
		for(std::vector< int>:: const_iterator it = vec.begin(); it != vec.end(); ++it)
			std :: cout << *it << "\t";
		std :: cout << "\nshortestSpan ==> " << sp.shortestSpan()	<< std :: endl;
		std :: cout << "longestSpan ==>	" << sp.longestSpan()	<< std :: endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}


void	TestSubject()
{
	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
int	main ( void )
{
	std :: cout << "/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/\n" << std :: endl;
	TestCpyConstructorAssignOperator();
	std :: cout << "/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/\n" << std :: endl;
	TestNegativeSize();
	std :: cout << "/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/\n" << std :: endl;
	TestOutRange();
	std :: cout << "/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/\n" << std :: endl;
	Test_100000_Number();
	std :: cout << "/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/\n" << std :: endl;
	TestElement2();
	std :: cout << "/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/\n" << std :: endl;
	TestAddrangeElemet();
	std :: cout << "/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/\n" << std :: endl;
	return (0);
}
