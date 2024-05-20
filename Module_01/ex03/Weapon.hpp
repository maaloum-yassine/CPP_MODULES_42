/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 00:35:16 by ymaaloum          #+#    #+#             */
/*   Updated: 2023/12/14 04:00:58 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WEAPON_HHP
#define _WEAPON_HHP

#include <iostream>

class Weapon
{

	private :
		std:: string type;
	public :
		Weapon();
		Weapon(std:: string _type);
		const std:: string& getType();
		void	setType(std:: string _type);
};

#endif


