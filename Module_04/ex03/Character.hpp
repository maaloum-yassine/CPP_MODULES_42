/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 06:58:17 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/05/20 02:24:35 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CHARACTER_HPP
#define _CHARACTER_HPP

#include "ICharacter.hpp"


typedef struct l_inventory
{
	AMateria *_Adrss_inventory;
	l_inventory* next;
}l_inventory;

class Character : public ICharacter
{

		std :: string _name;
		AMateria* _inventory[4];
		l_inventory *head;
	public :
	Character();
	Character(const std :: string&);
	Character(const Character&);
	Character& operator=(const Character&);
	std::string const & getName() const;
	void 	equip(AMateria* m);
	void 	unequip(int idx);
	void	Free_l_inventory(l_inventory *);
	void 	use(int idx, ICharacter& target);
	~Character();
};

#endif

