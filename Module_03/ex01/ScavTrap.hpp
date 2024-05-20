/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 21:04:57 by ymaaloum          #+#    #+#             */
/*   Updated: 2023/12/24 11:36:30 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	bool	in_gate;
	public :
		// Constructors
		ScavTrap();
		ScavTrap(const std :: string&);
		ScavTrap(const ScavTrap&);
		// Assignment operator
		ScavTrap& operator=(const ScavTrap&);
		//Member functions
		void	attack(const std::string& target);
		void	Display();
		void 	guardGate();
		//Destructor
		~ScavTrap();
};

#endif
