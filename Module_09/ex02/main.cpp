/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:03:24 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/03/22 03:52:30 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main (int ac, char *av[])
{
	if (ac > 1 )
	{
		/*************************************/
		std :: string input;
		while (++av && *av)
			input += std::string(*av) + " ";
		PmergeMe p(input);
		// std :: cout << "/*/*/*/*/*/*/*" << std :: endl;
		// /****************TestOrtodox*********************/
		// std :: cout << "/*/*/*/*/*/*/*" << std :: endl;
		// std :: cout << "ORTODOX" << std ::endl;
		// PmergeMe p1("9 6 3");
		// std :: cout << "CpyConstructor" << std ::endl;
		// PmergeMe p3(p1);
		// std :: cout << "Assign-Operator" << std ::endl;
		// p3 = p;
		// std :: cout << "/*/*/*/*/*/*/*" << std :: endl;
		/*************************************/
	}
		else
			std :: cout << "ERREUR" << std :: endl;
	return (0);
}
