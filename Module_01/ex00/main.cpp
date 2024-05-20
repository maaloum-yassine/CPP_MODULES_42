/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 03:55:52 by ymaaloum          #+#    #+#             */
/*   Updated: 2023/12/14 03:09:33 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
	std :: string name;

	std :: cout << "Please enter name Zombie :" << std :: endl;
	std::getline(std::cin, name);
	if (name[0])
		randomChump(name);
	else
		std :: cout << "name invalid! " << std ::endl;
	return (0);
}
