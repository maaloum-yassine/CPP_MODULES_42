/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 03:46:41 by ymaaloum          #+#    #+#             */
/*   Updated: 2023/12/14 03:42:36 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <cctype>

class Zombie
{
	private :
		std::string name;
	public :
			std::string	get_name();
			void		set_name(std::string name);
			Zombie();
			~Zombie();
			void announce( void );
};

Zombie* zombieHorde( int N, std::string name );

#endif
