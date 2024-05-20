/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 06:20:02 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/01/01 06:58:41 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice ::Ice():AMateria("ice")
{

}


Ice ::Ice(std::string const & type):AMateria(type)
{

}

Ice ::Ice(const Ice& cpyIce)
{
	*this = cpyIce;
}


Ice& Ice :: operator= (const Ice& cpyIce)
{
	if (this != &cpyIce)
		this->_type = cpyIce._type;
	return *this;
}


Ice* Ice ::clone()const
{
	return (new Ice(*this));
}

void Ice :: use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice ::~Ice()
{

}
