/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 03:46:41 by ymaaloum          #+#    #+#             */
/*   Updated: 2023/11/23 09:02:44 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private :
		std::string name;

	public :
			Zombie(std:: string name);
			void announce( void );
			~Zombie();
};
Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
