/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 19:03:16 by ymaaloum          #+#    #+#             */
/*   Updated: 2023/12/26 23:10:14 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal ::Animal():_Type("Animal")
{
	std::cout << "Default constructor called  Animal  is created [^_^] "<< std::endl;
}


Animal ::Animal(const std :: string& Type): _Type(Type)
{
	std::cout << "Initialize constructor called Animal is created [^_^] "<< std::endl;
}


Animal :: Animal (const Animal& cpy_animal)
{
	std :: cout << "Copy assignment operator called" << std ::endl;
	*this = cpy_animal;
}

Animal&  Animal :: operator=(const Animal& _animal)
{
	if (this != &_animal)
		this->_Type =  _animal._Type;
	return *this;
}


void	 Animal :: setType(const std :: string& Type)
{
	this->_Type = Type;
}

std :: string  Animal ::getType() const
{
	return (this->_Type);
}


void Animal :: makeSound() const
{
	std :: cout << "`Sound Animal`" << std ::endl;
}

Animal :: ~Animal()
{
	std::cout << "Destructor called Animal is destroyed [^_^]" << std::endl;
}

