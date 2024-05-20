/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 21:39:22 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/01/03 03:26:49 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat :: Cat ():Animal()
{
	std::cout << "Default constructor called  Cat  is created [^_^] "<< std::endl;
	this->brain = new Brain();
	this->_Type = "Cat";
}

Cat :: Cat (const std :: string& type):Animal(type)
{
	std::cout << "Initialize constructor called Cat is created [^_^] "<< std::endl;
	this->brain = new Brain();
	this->_Type = type;
}

Cat :: Cat(const Cat& cpy_cat):Animal(cpy_cat)
{
	std :: cout << "Copy assignment operator called" << std ::endl;
	
	this->brain = new Brain();
	*this = cpy_cat;
}


Cat&	Cat :: operator=(const Cat& _cat)
{
	if ( this != &_cat )
	{
		this->_Type = _cat._Type;
		const std :: string(&tab)[100] = _cat.get_Brain()->get_all_Ideas();
		std :: string _tab[100];
		for (int i = 0; i < 100; i++)
			_tab[i] = tab[i];
		this->brain->set_all_ideas(_tab);
	}
	return *this;
}


void	Cat :: set_Brain(const Brain& _brain)
{
	for (int i = 0; i < 100; i++)
		this->brain->set_elment_ideas(_brain.get_elment_ideas(i), i);
}

Brain*	Cat :: get_Brain() const
{
	return (this->brain);
}

void Cat :: makeSound() const
{
	std :: cout << "!!🐱🐱🐱!!" << std ::endl;
}

Cat :: ~Cat ()
{
	delete this->brain;
	std::cout << "Destructor called  Cat is destroyed [^_^]" << std::endl;
}
