/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 07:43:48 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/05/20 00:42:13 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private :
		Contact contact[8];
	public :
		PhoneBook(void);
		~PhoneBook(void);
		void	add_contact(Contact c, int *i);
		void	find_contact(std::string index);
		bool	affiche_contact(int count);
};

bool	ft_add(PhoneBook *phonebook, int *i);
void	ft_add(std::string *input, std::string text);
bool	ft_search_contact(PhoneBook *phonebook, int count);

#endif
