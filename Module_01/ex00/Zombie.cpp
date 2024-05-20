/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 03:55:48 by ymaaloum          #+#    #+#             */
/*   Updated: 2023/11/25 16:37:25 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce()
{
	std:: cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie ::Zombie(std:: string name)
{
	this->name = name;
}

Zombie ::~Zombie()
{
	std:: cout << name << ": is destroyed" << std::endl;
}
