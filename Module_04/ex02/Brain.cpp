/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 00:44:19 by ymaaloum          #+#    #+#             */
/*   Updated: 2023/12/29 05:09:16 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain :: Brain()
{
	std :: string brain = "Brain";
	std::cout << "Default constructor called  Brain  is created [^_^] "<< std::endl;
	for (int i = 0; i < 100 ; i++)
		this->_ideas[i] = "Unknow_BRAIN";
}


Brain :: Brain(const std :: string(&ideas)[100] )
{
	for (int i = 0; i < 100 ; i++)
		this->_ideas[i] = ideas[i];
	std::cout << "Initialize constructor called Brain is created [^_^] "<< std::endl;
}


Brain	:: Brain(const Brain& _cpy_brian)
{
	*this = _cpy_brian;
}

Brain& 	Brain :: operator=(const Brain& _brain)
{
	if (this != &_brain)
	{
		for (int i = 0; i < (int)(sizeof (_brain._ideas) / sizeof(std:: string)) ; i++)
			this->_ideas[i] = _brain._ideas[i];
	}
	return *this;
}



void	Brain :: set_elment_ideas(const std :: string& idea, int index_idea)
{
	this->_ideas[index_idea] = idea;
}


std :: string	Brain :: get_elment_ideas(int index_idea) const
{
	return (this->_ideas[index_idea]);
}

void Brain :: set_all_ideas( std :: string(&ideas)[100])
{
	for (int i = 0; i < (int)(sizeof (ideas) / sizeof(std:: string)) ; i++)
		this->_ideas[i] = ideas[i];
}


const std::string (&Brain::get_all_Ideas() const)[100]
{
	return (this->_ideas);
}

Brain :: ~Brain()
{
	std::cout << "Destructor called  Brain is destroyed [^_^]" << std::endl;
}

