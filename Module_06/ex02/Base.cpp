/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 23:02:42 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/01/30 06:00:02 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <unistd.h>
Base ::~Base()
{}

Base * generate(void)
{

	srand(time(NULL));
	int randomNum = rand() % 3;

	switch (randomNum)
	{
	case 0:
			return (new A);
	case 1:
			return (new B);
	default:
			return (new C);
	}
	return NULL;
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std :: cout << " type of the object pointed to by p ==> 'A'" << std :: endl;
	else if (dynamic_cast<B*>(p))
		std :: cout << " type of the object pointed to by p ==> 'B'" << std :: endl;
	else if (dynamic_cast<C*>(p))
		std :: cout << " type of the object pointed to by p ==> 'C'" << std :: endl;
	else
		std :: cout << "type of the object pointed to by p ==> unknown" << std :: endl;
}



void	identify(Base& p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std :: cout << " type of the object pointed to by p ==> 'A'" << std :: endl;
	}
	catch(const std::bad_cast& e)
	{}
	try
	{
		B &b = dynamic_cast<B&>(p);
		(void)b;
		std :: cout << " type of the object pointed to by p ==> 'B'" << std :: endl;
	}
	catch(const std::bad_cast& e)
	{}
	try
	{
		C &c = dynamic_cast<C&>(p);
		(void)c;
		std :: cout << " type of the object pointed to by p ==> 'C'" << std :: endl;
	}
	catch(const std::bad_cast& e)
	{}
}
