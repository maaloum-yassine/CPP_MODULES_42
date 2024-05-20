/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:22:13 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/05/20 02:13:51 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap :: FragTrap():ClapTrap()
{
	std::cout << "default constructor called  FragTrap  is created [^_^] "<< std::endl;
	this->_point_health = 100;
	this->_point_energy = 100;
	this->_attack_damage = 30;
}

FragTrap ::	FragTrap(const std :: string& name) : ClapTrap(name)
{
	std::cout << "Initialize constructor called  FragTrap  "<< this->_name << " is created [^_^] "<< std::endl;
	this->_point_health = 100;
	this->_point_energy = 100;
	this->_attack_damage = 30;
}

FragTrap :: FragTrap(const FragTrap& _FragTrap):ClapTrap(_FragTrap)
{
	std::cout << "FragTrap Copy Constructor called [^_^] "<< std::endl;
}

FragTrap& FragTrap :: operator=(const FragTrap& _FragTrap)
{
	if (this != &_FragTrap)
		ClapTrap::operator=(_FragTrap);
	return *this;
}


void  FragTrap :: highFivesGuys()
{
	std :: cout << "high --- Fives -------Guys !" << std ::endl;
}

FragTrap :: ~FragTrap()
{
	std::cout << "Destructor called FragTrap " <<  this->_name << " is destroyed [^_^]" << std :: endl;
}
