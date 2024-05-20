/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 23:11:35 by ymaaloum          #+#    #+#             */
/*   Updated: 2023/12/28 03:16:20 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"

WrongAnimal ::WrongAnimal():_Type("WrongAnimal")
{
	std::cout << "Default constructor called  WrongAnimal  is created [^_^] "<< std::endl;
}


WrongAnimal ::WrongAnimal(const std :: string& Type): _Type(Type)
{
	std::cout << "Initialize constructor called WrongAnimal is created [^_^] "<< std::endl;
}


WrongAnimal :: WrongAnimal (const WrongAnimal& cpy_WrongAnimal)
{
	std :: cout << "Copy assignment operator called" << std ::endl;
	*this = cpy_WrongAnimal;
}

WrongAnimal&  WrongAnimal :: operator=(const WrongAnimal& _WrongAnimal)
{
	if (this != &_WrongAnimal)
		this->_Type =  _WrongAnimal._Type;
	return *this;
}


void	 WrongAnimal :: setType(const std :: string& Type)
{
	this->_Type = Type;
}

std :: string  WrongAnimal ::getType() const
{
	return (this->_Type);
}


void WrongAnimal :: makeSound() const
{
	std :: cout << "`Sound WrongAnimal`" << std ::endl;
}

WrongAnimal :: ~WrongAnimal()
{
	std::cout << "Destructor called WrongAnimal is destroyed [^_^]" << std::endl;
}

