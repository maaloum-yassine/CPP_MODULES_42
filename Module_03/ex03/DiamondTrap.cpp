/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 21:22:52 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/05/20 02:20:43 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap :: DiamondTrap():_name("Diamod_TRAP")
{
	std::cout << "default constructor called DiamondTrap is created [^_^] "<< std::endl;
	ScavTrap s1;
	this->_point_health 		=	this->FragTrap::_point_health;
	this->_point_energy 		=	s1.get_point_energy();
	this->_attack_damage		=	this->FragTrap::_attack_damage;
}

DiamondTrap :: DiamondTrap (const std :: string& name):ClapTrap(name + "_clap_name"),ScavTrap(name),FragTrap(name)
{
	ScavTrap s1;
	std::cout << "Initialize constructor called DiamondTrap is created [^_^] "<< std::endl;
	this->_name 				=	name;
	this->_point_health 		=	this->FragTrap::_point_health;
	this->_point_energy 		=	s1.get_point_energy();
	this->_attack_damage		=	this->FragTrap::_attack_damage;
}


DiamondTrap::DiamondTrap(const DiamondTrap& _DiamondTrap) : ClapTrap(_DiamondTrap), ScavTrap(_DiamondTrap), FragTrap(_DiamondTrap)
{
	this->_name = _DiamondTrap._name;
	*this = _DiamondTrap;
	std::cout << "DiamondTrap Copy Constructor called [^_^] "<< std::endl;
}

DiamondTrap&  DiamondTrap ::operator=(const DiamondTrap& _DiamondTrap)
{
	if (this != &_DiamondTrap)
	{
		this->ClapTrap::_name		= 	_DiamondTrap.ClapTrap::_name;
		this->_name 				=	_DiamondTrap._name;
		this->_point_health 		=	_DiamondTrap._point_health;
		this->_point_energy 		=	_DiamondTrap._point_energy;
		this->_attack_damage		=	_DiamondTrap._attack_damage;
	}
	return *this;
}


void	DiamondTrap	::attack(const std::string& target)
{
	ScavTrap:: attack(target);
}


void	DiamondTrap:: Display()
{
	std :: cout << 	"Name 			: "<<	this->_name  << std ::endl
				<<	"Point health : " 	<<	this->_point_health << std ::endl
				<< 	"Point enregy : " 	<<	this->_point_energy << std ::endl
				<< 	"Attack damage : "	<<	this->_attack_damage << std :: endl;
	if (! this->_point_health || !this->_point_energy )
		std :: cout << this->_name << " is dead!" << std :: endl;
}

void	DiamondTrap :: guardGate()
{
	if (this->_in_gate == false)
	{
		std :: cout <<  _name << " is now in Gate" << std :: endl;
		this->_in_gate = true;
	}
	else
	{
		std :: cout << _name << " is not  in Gate" << std :: endl;
		this->_in_gate = false;
	}
}


void	DiamondTrap	::	whoAmI( void ) {
	std::cout << "DiamondTrap name " << this->_name << ", ClapTrap name: " << ClapTrap::_name << std::endl;
}


std :: string	DiamondTrap	:: get_name()const
{
	return (this->_name);
}


DiamondTrap ::	~DiamondTrap()
{
	std::cout << "Destructor called DiamondTrap " << _name <<  " is destroyed [^_^]" << std::endl;
}
