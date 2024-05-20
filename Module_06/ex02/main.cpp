/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 23:06:12 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/01/30 05:59:14 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


int  main()
{
	Base *base = new Base;
	A a;
	B b;
	C c;

	identify(base);
	delete base;
	identify(a);
	identify(&a);
	identify(b);
	identify(&b);
	identify(c);
	identify(&c);
	std :: cout << "/*/*/*/*/*/*/*/*/*/*/*/*/*" << std :: endl;
	for (int i = -1; i < 5 ; i++)
	{
		Base *x = generate();
		identify(x);
		usleep(1000000);
		delete x;
	}
}

