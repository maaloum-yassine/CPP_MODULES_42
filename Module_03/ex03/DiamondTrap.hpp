/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 21:22:55 by ymaaloum          #+#    #+#             */
/*   Updated: 2023/12/25 23:45:43 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap , public  FragTrap
{
	private :
		std :: string _name;
	public :
		// Constructors
		DiamondTrap();
		DiamondTrap( const std::string&);
		DiamondTrap( const DiamondTrap&);
		// Assignment operator
		DiamondTrap& operator=(const DiamondTrap&);
		//Member functions
		std:: string	get_name(void) const;
		void	attack(const std::string&);
		void 	guardGate();
		void	Display();
		void	whoAmI( void );
		//Destructor
		~DiamondTrap();
};

#endif

