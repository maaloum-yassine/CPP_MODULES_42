/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 08:08:08 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/01/16 16:13:13 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main ()
{

	AForm* rrf1 = NULL;
	AForm* rrf2  = NULL;

	try
	{
		Intern someRandomIntern;
		rrf1 = someRandomIntern.makeForm("robotomy request", "Bender");
		rrf2 = someRandomIntern.makeForm("robotomy request", "89");
		std :: cout << rrf1->getName() << std :: endl;
		std :: cout << rrf2->getName() << std :: endl;
	}
	catch(const std::exception& e)
	{
		delete rrf1;
		delete rrf2;
		std :: cout << e.what() << std :: endl;
	}
	std :: cout << "Prom is finish " << std :: endl;
	return (0);
}
