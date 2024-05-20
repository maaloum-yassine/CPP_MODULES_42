/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 19:03:16 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/01/03 04:18:23 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal ::AAnimal():_Type("Animal")
{
	std::cout << "Default constructor called  Animal  is created [^_^] "<< std::endl;
}


AAnimal ::AAnimal(const std :: string& Type): _Type(Type)
{
	std::cout << "Initialize constructor called Animal is created [^_^] "<< std::endl;
}


AAnimal :: AAnimal (const AAnimal& cpy_animal)
{
	std :: cout << "Copy assignment operator called" << std ::endl;
	*this = cpy_animal;
}

AAnimal&  AAnimal :: operator=(const AAnimal& _animal)
{
	if (this != &_animal)
		this->_Type =  _animal._Type;
	return *this;
}


void	 AAnimal :: setType(const std :: string& Type)
{
	this->_Type = Type;
}

std :: string  AAnimal ::getType() const
{
	return (this->_Type);
}

AAnimal :: ~AAnimal()
{
	std::cout << "Destructor called Animal is destroyed [^_^]" << std::endl;
}

