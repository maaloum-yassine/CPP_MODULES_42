/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 00:35:12 by ymaaloum          #+#    #+#             */
/*   Updated: 2023/11/27 00:35:13 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon :: Weapon()
{
	return ;
}

Weapon ::	Weapon(std:: string _type):type(_type)
{
	return ;
}

const std:: string& Weapon :: getType()
{
	return (this->type);
}

void	Weapon:: setType(std:: string _type)
{
	this->type = _type;
}

