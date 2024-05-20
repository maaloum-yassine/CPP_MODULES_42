/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 21:04:57 by ymaaloum          #+#    #+#             */
/*   Updated: 2023/12/25 23:52:02 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	protected :
	bool	_in_gate;
	public :
		// Constructors
		ScavTrap();
		ScavTrap(const std :: string&);
		ScavTrap(const ScavTrap&);
		// Assignment operator
		ScavTrap& operator=(const ScavTrap&);
		//Member functions
		unsigned	int	 	get_point_energy(void) const;
		void				attack(const std::string& target);
		void				Display();
		virtual	 void 		guardGate();
		//Destructor
		~ScavTrap();
};

#endif
