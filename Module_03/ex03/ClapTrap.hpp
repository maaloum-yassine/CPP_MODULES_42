/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 03:49:27 by ymaaloum          #+#    #+#             */
/*   Updated: 2023/12/26 00:07:07 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	protected :
		std :: string	_name;
		unsigned int	_point_health;
		unsigned int	_point_energy;
		unsigned int	_attack_damage;
	public :
		// Constructors
		ClapTrap();
		ClapTrap(const std :: string&);
		ClapTrap(const ClapTrap&);
		// Assignment operator
		ClapTrap& 		operator=(const ClapTrap&);
		//getters and setters
		void								set_name(const std :: string&);
		void								set_point_health(int);
		void								set_point_energy(int);
		void								set_attack_damage(int);
		virtual		std:: string			get_name(void) const;
		unsigned	int						get_point_health(void) const;
		virtual unsigned	int				get_point_energy(void) const;
		unsigned	int						get_attack_damage(void) const;
		//Member functions
		virtual	void						attack(const std::string& target);
		virtual void						Display(void);
		void 								takeDamage(unsigned int amount);
		void 								beRepaired(unsigned int amount);
		//Destructor
		virtual ~ClapTrap();
};


#endif
