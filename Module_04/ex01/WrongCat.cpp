/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 23:19:47 by ymaaloum          #+#    #+#             */
/*   Updated: 2023/12/28 03:16:10 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"


WrongCat :: WrongCat ():WrongAnimal()
{
	std::cout << "Default constructor called  WrongCat  is created [^_^] "<< std::endl;
	this->_Type = "WrongCat";
}

WrongCat :: WrongCat (const std :: string& type):WrongAnimal(type)
{
	std::cout << "Initialize constructor called WrongCat is created [^_^] "<< std::endl;
	this->_Type = type;
}

WrongCat :: WrongCat(const WrongCat& cpy_WrongCat):WrongAnimal(cpy_WrongCat)
{
	std :: cout << "Copy assignment operator called" << std ::endl;
	*this = cpy_WrongCat;
}


WrongCat&   WrongCat :: operator=(const WrongCat& _WrongCat)
{
	if ( this != &_WrongCat )
		this->_Type = _WrongCat._Type;
	return *this;
}


void WrongCat :: makeSound() const
{
	std :: cout << "!!🐱🐱🐱!!" << std ::endl;
}

WrongCat :: ~WrongCat ()
{
	std::cout << "Destructor called  WrongCat is destroyed [^_^]" << std::endl;
}
