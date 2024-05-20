/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 00:34:58 by ymaaloum          #+#    #+#             */
/*   Updated: 2023/12/14 05:38:14 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "HumanA.hpp"

class HumanB
{
	private :
		std :: string	name;
		Weapon*			weapon;
	public :
		HumanB(std :: string	_name);
		HumanB(std :: string	_name, Weapon&	weapon);
		void		setWeapon(Weapon &weapon);
		void		attack();
};

#endif
