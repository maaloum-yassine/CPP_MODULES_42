/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:18:53 by ymaaloum          #+#    #+#             */
/*   Updated: 2023/12/25 21:33:07 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
	public :
		// Constructors
		FragTrap();
		FragTrap(const std :: string&);
		FragTrap(const FragTrap&);
		// Assignment operator
		FragTrap& operator=(const FragTrap&);
		//Member functions
		void 	highFivesGuys(void);
		//Destructor
		~FragTrap();
};

#endif
