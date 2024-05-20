	/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 06:47:38 by ymaaloum          #+#    #+#             */
/*   Updated: 2023/11/19 08:35:32 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static	void ft_prog(PhoneBook	*phonebook,std::string input, int i, int count)
{
	while (std::getline(std::cin, input))
	{
		if (input == "ADD")
		{
			if (count < 8)
				count++;
			if (i == 8)
				i = 0;
			if (ft_add(phonebook, &i) == false)
				break ;
		}
		else if (input == "SEARCH")
		{
			if (phonebook->affiche_contact(count) == true)
			{
				if (ft_search_contact(phonebook, count) == false)
					break;
			}
		}
		else if (input == "EXIT")
			break;
		std::cout << "\033[1;32mEnter an order {ADD OR SEARCH OR EXIT}:\033[1;96m" << std::endl;
	}
}

int main()
{
	PhoneBook		phonebook;
	std::string		input;
	int				i;
	int				count;

	i = 0;
	count = 0;
	std::cout << "\033[1;32mEnter an order {ADD OR SEARCH OR EXIT}:\033[1;96m" << std::endl;
	ft_prog(&phonebook, input,i, count);
	return (0);
}

