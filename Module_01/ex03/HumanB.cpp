/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 05:38:07 by ymaaloum          #+#    #+#             */
/*   Updated: 2023/12/14 05:38:08 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB :: HumanB(std :: string	_name):name(_name)
{
	this->weapon = NULL;
	return ;
}

HumanB :: HumanB(std :: string	_name, Weapon& _weapon):name(_name),weapon(&_weapon)
{
	return ;
}

void	HumanB :: setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void	HumanB ::	attack()
{
	if (this->weapon != NULL)
	{
			std :: cout << name << " attacks with their "
				<< weapon->getType() << std ::endl;
	}
	else
		std :: cout << name << " not have weapon" << std :: endl;
}
