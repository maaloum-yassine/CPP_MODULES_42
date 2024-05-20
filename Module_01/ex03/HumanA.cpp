/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 00:35:02 by ymaaloum          #+#    #+#             */
/*   Updated: 2023/12/14 05:38:21 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA :: HumanA(std:: string _name, Weapon &_weapon) : name(_name),weapon(_weapon)
{
}

void	HumanA:: attack()
{
	std :: cout << name << " attacks with their "
				<< weapon.getType() << std ::endl;
}
