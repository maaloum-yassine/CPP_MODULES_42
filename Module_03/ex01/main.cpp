/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 03:49:01 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/05/20 02:11:27 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main ()
{
	{
		ClapTrap *C1 = new ScavTrap();
		C1->attack("EE1");
		delete C1;
	}
	std :: cout << "*******************************************************************" << std :: endl;
	{

		ScavTrap S1("Player<->dirived");
		ClapTrap C1;
		C1 = S1;
		S1.attack("EE2");
		for(int i = 0; i < 2; i++)
			S1.takeDamage(50);
		S1.beRepaired(10);
		S1.Display();
		C1.Display();
	}
	std :: cout << "*******************************************************************" << std :: endl;
	{
		ClapTrap *s1 = new ScavTrap();
		s1->attack("EE3");
		s1->beRepaired(45);
		s1->Display();
		delete s1;
	}

	return (0);
}
