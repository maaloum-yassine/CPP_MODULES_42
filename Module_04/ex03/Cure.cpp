/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 06:35:39 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/05/20 02:24:15 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure ::Cure():AMateria("cure")
{

}

Cure ::Cure(std::string const & type):AMateria(type)
{

}

Cure ::Cure(const Cure& cpyCure)
{
	*this = cpyCure;
}


Cure& Cure :: operator= (const Cure &cpyCure)
{
	if (this != &cpyCure)
		this->_type = cpyCure._type;
	return *this;
}


Cure* Cure ::clone()const
{
	return (new Cure(*this));
}

void Cure :: use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}


Cure ::~Cure()
{

}
