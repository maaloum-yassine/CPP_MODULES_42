/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 21:12:45 by ymaaloum          #+#    #+#             */
/*   Updated: 2023/12/28 03:17:09 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog :: Dog():Animal()
{
	std::cout << "Default constructor called  Dog  is created [^_^] "<< std::endl;
	this->_Type = "Dog";
}

Dog :: Dog(const std:: string& type):Animal(type)
{
	std::cout << "Initialize constructor called Dog is created [^_^] "<< std::endl;
	this->_Type = "Dog";
}

Dog :: Dog(const Dog& cpy_dog):Animal(cpy_dog)
{
	std :: cout << "Copy assignment operator called" << std ::endl;
	*this = cpy_dog;
}


Dog&	Dog :: operator=(const Dog& _dog)
{
	if (this!= &_dog)
		this->_Type = _dog._Type;
	return *this;
}


void Dog :: makeSound() const
{
	std :: cout << "!!🐶🐶🐶!!" << std ::endl;
}

Dog ::~Dog()
{
	std::cout << "Destructor called  Dog is destroyed [^_^]" << std::endl;
}
