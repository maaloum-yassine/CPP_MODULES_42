/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 21:12:45 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/01/03 03:43:47 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog :: Dog():Animal()
{
	std::cout << "Default constructor called  Dog  is created [^_^] "<< std::endl;
	this->brain = new Brain();
	this->_Type = "Dog";
}

Dog :: Dog(const std:: string& type):Animal(type)
{
	std::cout << "Initialize constructor called Dog is created [^_^] "<< std::endl;
	this->brain = new Brain();
	this->_Type = "Dog";
}

Dog :: Dog(const Dog& cpy_dog):Animal(cpy_dog)
{
	std :: cout << "Copy assignment operator called" << std ::endl;
	this->brain = new Brain();
	*this = cpy_dog;
}


Dog&	Dog :: operator=(const Dog& _dog)
{
	if (this!= &_dog)
	{
		this->_Type = _dog._Type;
		const std :: string(&tab)[100] = _dog.get_Brain()->get_all_Ideas();
		std :: string _tab[100];
		for (int i = 0; i < 100; i++)
			_tab[i] = tab[i];
		this->brain->set_all_ideas(_tab);
	}
	return *this;
}


void	Dog :: set_Brain(const Brain& _brain)
{
	for (int i = 0; i < 100; i++)
		this->brain->set_elment_ideas(_brain.get_elment_ideas(i), i);

}

Brain*	Dog :: get_Brain() const
{
	return (this->brain);
}

void Dog :: makeSound() const
{
	std :: cout << "!!🐶🐶🐶!!" << std ::endl;
}

Dog ::~Dog()
{
	delete this->brain;
	std::cout << "Destructor called  Dog is destroyed [^_^]" << std::endl;
}
