/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 21:05:01 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/05/20 02:18:05 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

ScavTrap :: ScavTrap():ClapTrap()
{
	std::cout << "default constructor called  ScavTrap  is created [^_^] "<< std::endl;
	this->_name = "Unknow";
	this->_point_health = 100;
	this->_point_energy = 50;
	this->_attack_damage = 20;
	this->_in_gate = false;
}

ScavTrap :: ScavTrap (const std :: string& name):ClapTrap(name)
{
	std::cout << "Initialize constructor called  ScavTrap  "<< this->_name << " is created [^_^] "<< std::endl;
	this->_point_health = 100;
	this->_point_energy = 50;
	this->_attack_damage = 20;
	this->_in_gate = false;
}

ScavTrap :: ScavTrap(const ScavTrap& _ScavTrap):ClapTrap(_ScavTrap)
{
	std::cout << "ScavTrap Copy Constructor called [^_^] "<< std::endl;
}

unsigned	int	ScavTrap ::	get_point_energy(void) const
{
	return (this->_point_energy);
}

ScavTrap& ScavTrap ::operator=(const ScavTrap& _ScavTrap)
{
	if (this != &_ScavTrap)
	{
		ClapTrap::operator=(_ScavTrap);
		this->in_gate = _ScavTrap.in_gate;
	}
	return (*this);
}


void 		ScavTrap ::	attack(const std::string& target)
{
	if (this->_point_energy && this->_point_health)
	{
		std :: cout << "ScavTrap "	<< this->_name << " attacks " << target << " causing "
				<< this->_attack_damage << " points of damage!" << std :: endl;
		this->_point_energy--;
	}
	else
	{
		if (!this->_point_health)
			std::cout << "ScavTrap " << this->_name << " is dead!" << std::endl;
		else if  (!this->_point_energy)
			std::cout << "ScavTrap " << this->_name << " is not have energy points!" << std::endl;
	}
}

void	ScavTrap :: guardGate()
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

void	ScavTrap:: Display()
{
	ClapTrap::Display();
	if (this->_point_health && this->_in_gate == true)
		guardGate();
}

ScavTrap :: ~ScavTrap()
{
		std::cout << "Destructor called  ScavTrap " <<  _name << " is destroyed [^_^]" << std :: endl;
}

