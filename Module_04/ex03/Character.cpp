/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 07:05:35 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/05/20 03:11:13 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character  :: Character():_name("Unknow_Character")
{
	for (int i = 0 ; i < 4 ; i++)
		this->_inventory[i] = NULL;
	this->head = NULL;
}


Character  :: Character(const std :: string& name):_name(name)
{
	for (int i = 0 ; i < 4 ; i++)
		this->_inventory[i] = NULL;
	this->head = NULL;
}

Character :: Character (const Character& cpyCharacter)
{
	for (int i = 0 ; i < 4 ; i++)
		this->_inventory[i] = NULL;
	this->head = NULL;
	*this = cpyCharacter;
}

Character&  Character :: operator=(const Character& cpyCharacter)
{
	if (this != &cpyCharacter)
	{
		if (this->head)
			Free_l_inventory(this->head);
		if (cpyCharacter.head)
		{
			l_inventory* head = cpyCharacter.head;
			l_inventory* cpy_head = new l_inventory();
			this->head = cpy_head;
			cpy_head->_Adrss_inventory = head->_Adrss_inventory->clone();
			head = head->next;
			cpy_head->next = NULL;
			while (head)
			{
				cpy_head->next = new l_inventory();
				cpy_head->next->_Adrss_inventory = head->_Adrss_inventory->clone();
				head = head->next;
				cpy_head = cpy_head->next;
			}
			cpy_head->next = NULL;
		}
		this->_name = cpyCharacter._name;
		for (int i = 0; i < 4; i++)
		{
			if (this->_inventory[i])
			{
				delete this->_inventory[i];
				this->_inventory[i] = NULL;
			}
			if (cpyCharacter._inventory[i])
				this->_inventory[i] = cpyCharacter._inventory[i]->clone();
		}
	}
	return *this;
}

std::string const &  Character :: getName() const
{
	return (this->_name);
}


void Character :: equip(AMateria* m)
{
	if (m)
	{
		for (int i = 0 ; i < 4 ; i++)
		{
			if (!this->_inventory[i])
			{
				this->_inventory[i] = m->clone();
				break ;
			}
		}
		// Free allocated memory "m" it dépends on main program test
		delete m;
	}
	else
		std :: cout << "the object must be mallocated ! [^_^]" << std :: endl;
}

void	Character :: unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
	{
		if (this->_inventory[idx])
		{
			l_inventory* new_node = new l_inventory();
			l_inventory *head;
			head = this->head;
			if (!head)
			{
				this->head = new_node;
				this->head->_Adrss_inventory = this->_inventory[idx];
				this->head->next = NULL;
			}
			else
			{
				while (head->next)
					head = head->next;
				head->next = new_node;
				new_node->_Adrss_inventory = this->_inventory[idx];
				new_node->next = NULL;
			}
			this->_inventory[idx] = NULL;
		}
		else
			std :: cout << "Object of AMateria does not exist ! [^_^]" << std :: endl;
	}
	else
		std :: cout << "Index must be between [0,3]! [^_^] " << std :: endl;;
}

void Character  :: use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= 3)
	{
		if (this->_inventory[idx])
			this->_inventory[idx]->use(target);
		else
			std :: cout << "Object of AMateria does not exist ! [^_^]" << std :: endl;
	}
	else
		std :: cout << "Index must be between [0,3]! [^_^] " << std :: endl;;

}


void	Character  :: Free_l_inventory(l_inventory *l_inven)
{
	l_inventory* current = l_inven;
	while (current)
	{
		l_inventory* nextNode = current->next;
		delete current->_Adrss_inventory;
		delete current;
		current = nextNode;
	}
	l_inven = NULL;
}
Character  :: ~Character()
{
	Free_l_inventory(this->head);
	for (int i = 0 ; i < 4 ; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
}
