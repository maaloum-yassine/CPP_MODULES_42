/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 03:55:48 by ymaaloum          #+#    #+#             */
/*   Updated: 2023/12/14 03:34:02 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce()
{
	std:: cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie:: get_name()
{
	return (this->name);
}

void	Zombie :: set_name(std::string name)
{
	this->name = name;
}
Zombie ::Zombie()
{
}


Zombie ::~Zombie()
{
	std:: cout << get_name() << ": is destroyed" << std::endl;
}
