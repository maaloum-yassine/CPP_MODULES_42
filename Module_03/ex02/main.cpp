/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 03:49:01 by ymaaloum          #+#    #+#             */
/*   Updated: 2023/12/25 21:44:42 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main ()
{
	ClapTrap v1;
	v1.attack("00E");
	FragTrap F1;
	F1.Display();
	ClapTrap *c1 = new FragTrap;
	c1->attack("EE2");
	delete c1;
	c1 = &F1;
	c1->attack("EE2");
	return (0);
}
