/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 07:31:39 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/01/02 10:24:40 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource :: MateriaSource()
{
	for (int i = 0 ; i < 4; i++ )
		this->_inventory_src[i] = NULL;
}


MateriaSource :: MateriaSource(const MateriaSource& cpyMateriaSource)
{
	*this = cpyMateriaSource;
}


MateriaSource& MateriaSource:: operator=(const MateriaSource& cpyMateriaSource)
{
	for (int i = 0; i < 4 ; i++)
	{
		if (_inventory_src[i])
		{
			delete _inventory_src[i];
			_inventory_src[i] = NULL;
		}

		if (cpyMateriaSource._inventory_src[i])
			this->_inventory_src[i] = cpyMateriaSource._inventory_src[i]->clone();
	}
	return *this;
}


void	MateriaSource:: learnMateria(AMateria* m)
{
	if (m)
	{
		for (int i = 0; i < 4 ; i++)
		{
			if (!_inventory_src[i])
			{
				this->_inventory_src[i] = m->clone();
				break ;
			}
		}
		delete m;
	}
	else
		std :: cout << "the object must be mallocated ! [^_^]" << std :: endl;
}


AMateria* MateriaSource:: createMateria(std::string const & type)
{
	for (int i = 0; i < 4 ; i++)
	{
		if (this->_inventory_src[i] && this->_inventory_src[i]->getType() == type)
			return (this->_inventory_src[i]);
	}
	std :: cout << "The object name does not exist! [^_^] ";
	return NULL;
}

MateriaSource :: ~MateriaSource()
{

}
