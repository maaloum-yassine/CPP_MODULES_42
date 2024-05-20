/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 21:39:22 by ymaaloum          #+#    #+#             */
/*   Updated: 2023/12/28 03:17:47 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat :: Cat ():Animal()
{
	std::cout << "Default constructor called  Cat  is created [^_^] "<< std::endl;
	this->_Type = "Cat";
}

Cat :: Cat (const std :: string& type):Animal(type)
{
	std::cout << "Initialize constructor called Cat is created [^_^] "<< std::endl;
	this->_Type = type;
}

Cat :: Cat(const Cat& cpy_cat):Animal(cpy_cat)
{
	std :: cout << "Copy assignment operator called" << std ::endl;
	*this = cpy_cat;
}


Cat&   Cat :: operator=(const Cat& _cat)
{
	if ( this != &_cat )
		this->_Type = _cat._Type;
	return *this;
}


void Cat :: makeSound() const
{
	std :: cout << "!!🐱🐱🐱!!" << std ::endl;
}

Cat :: ~Cat ()
{
	std::cout << "Destructor called  Cat is destroyed [^_^]" << std::endl;
}
