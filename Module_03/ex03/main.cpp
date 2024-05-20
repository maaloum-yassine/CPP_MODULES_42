/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 03:49:01 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/05/20 02:22:00 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main ()
{
	/************************************/
	ClapTrap *C1 = new DiamondTrap;
	C1->attack("EE0");
	C1->Display();
	delete C1;
	/************************************/
	DiamondTrap D1;
	D1.attack("EE01");
	D1.whoAmI();
	D1.Display();
	DiamondTrap D2(D1);
	D2.guardGate();
	return (0);
}
