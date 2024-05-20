/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 03:49:01 by ymaaloum          #+#    #+#             */
/*   Updated: 2023/12/24 21:44:23 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main ()
{

	ClapTrap clptrap[3] = 	{	ClapTrap("Player1"),
								ClapTrap("Player2"),
								ClapTrap("Player3")
							};
	for (int i = 0 ; i <  3 ;i++)
		clptrap[i].set_attack_damage(2);
	/************************************/
	for (int i = 0 ; i <  3 ;i++)
	{
		clptrap[i].Display();
		std :: cout << "********************" << std :: endl;
	}
	/************************************/
	for (int i = 0 ; i <  3 ;i++)
		clptrap[i].attack("ennemie");
	std :: cout << "********************" << std :: endl;
	/************************************/
	for (int i = 0 ; i <  3 ;i++)
		clptrap[0].takeDamage(3);
	std :: cout << "********************" << std :: endl;
	clptrap[0].beRepaired(10);
	for (int i = 0 ; i <  3 ;i++)
	{
		clptrap[i].Display();
		std :: cout << "********************" << std :: endl;
	}
	clptrap[0].takeDamage(10);
	clptrap[0] = clptrap[1];
	clptrap[0].Display();
	
	return (0);
}
