/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 04:38:49 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/05/20 02:11:33 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap :: ClapTrap():_name("Unknow"),_point_health(10),_point_energy(10),_attack_damage(0)
{
	std::cout << "default constructor called " << "ClapTrap " << "is created [^_^] "<< std::endl;
}

ClapTrap :: ClapTrap(const std :: string& name):_name(name),_point_health(10),_point_energy(10),_attack_damage(0)
{
		std::cout << "Initialize constructor called " << "ClapTrap " << "is created [^_^] "<< std::endl;
}


ClapTrap :: ClapTrap(const ClapTrap& _ClapTrap)
{
	std::cout << "Copy constructor called [^_^]" << std::endl;
	*this = _ClapTrap;
}

ClapTrap&  ClapTrap :: 		operator=(const ClapTrap& _ClapTrap)
{
	std::cout << "Copy assignment operator called [^_^]" << std::endl;
	if (this != &_ClapTrap)
	{
		this->set_name(_ClapTrap.get_name());
		this->set_point_health(_ClapTrap.get_point_health());
		this->set_point_energy(_ClapTrap.get_point_energy());
		this->set_attack_damage(_ClapTrap.get_attack_damage());
	}
	return (*this);
}


void	ClapTrap ::		set_name(const std :: string& name)
{
	this->_name = name;
}

void	ClapTrap ::	set_point_health(int point_health)
{
	this->_point_health = point_health;
}

void	ClapTrap ::		set_point_energy(int point_energy)
{
	this->_point_energy = point_energy;
}

void	ClapTrap ::		set_attack_damage(int _attack_damage)
{
	this->_attack_damage = _attack_damage;
}

std:: string ClapTrap ::	get_name(void) const
{
	return (this->_name);
}

unsigned	int	ClapTrap ::	get_point_health(void) const
{
	return (this->_point_health);
}

unsigned	int	ClapTrap ::	get_point_energy(void) const
{
	return (this->_point_energy);
}

unsigned	int	ClapTrap ::	get_attack_damage(void) const
{
	return (this->_attack_damage);
}


void 		ClapTrap ::	attack(const std::string& target)
{
	if (this->_point_energy && this->_point_health)
	{
		std :: cout << "ClapTrap "	<< this->_name << " attacks " << target << " causing "
				<< this->_attack_damage << " points of damage!" << std :: endl;
		this->_point_energy--;
	}
	else
	{
		if (!this->_point_health)
			std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
		else if  (!this->_point_energy)
			std::cout << "ClapTrap " << this->_name << " is not have energy points!" << std::endl;
	}
}

void		ClapTrap ::	beRepaired(unsigned int amount)
{
	if (this->_point_energy && this->_point_health)
	{
			std::cout << "ClapTrap " << this->_name << " healed " << amount << " point." << std::endl;
			this->_point_health += amount;
			this->_point_energy--;
	}
	else
	{
		if (!this->_point_health)
			std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
		else if  (!this->_point_energy)
			std::cout << "ClapTrap " << this->_name << " is not have energy points!" << std::endl;
	}
}

void		ClapTrap ::	takeDamage(unsigned int amount)
{
	if (this->_point_health)
	{
		if ( (int)(this->_point_health - amount) < 0 )
		{
			std::cout << "ClapTrap " << this->_name << " Suffered " << this->_point_health  << " point of damage!" << std::endl;
			this->_point_health = 0;
		}
		else
		{
			std::cout << "ClapTrap " << this->_name << " Suffered " << amount  << " point of damage!" << std::endl;
			this->_point_health -= amount;
		}
	}
	else
		std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
}


void	ClapTrap :: Display()
{
	std :: cout << 	"Name : " 			<<	this->_name  << std ::endl
				<<	"Point health : " 	<<	this->_point_health << std ::endl
				<< 	"Point enregy : " 	<<	this->_point_energy << std ::endl
				<< 	"Attack damage : "	<<	this->_attack_damage << std :: endl;
}

ClapTrap :: ~ClapTrap ()
{
	std::cout << "Destructor called " << _name << " ClapTrap is destroyed [^_^]" << std::endl;
}
