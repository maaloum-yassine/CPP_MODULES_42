/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_utils2.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 04:59:32 by ymaaloum          #+#    #+#             */
/*   Updated: 2023/12/10 05:35:32 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static	void	ft_print_column(std::string str)
{
	int	i;
	int	j;

	i = 0;
	while(str[i])
		i++;
	if (i >=  11)
	{
		i = -1;
		while (++i <= 8)
			std::cout << str[i];
		std::cout << ".";
	}
	else
	{
		j = 10 - i + 1;
		while (--j > 0)
			std::cout << " ";
		while (str[j])
			std::cout << str[j++];
	}
}

static	void	ft_affiche(Contact contact, int index ,int count)
{
	std::cout << "\033[1;95m|\033[1;97m";
	ft_print_column(std::to_string(index + 1));
	std::cout << "\033[1;95m|\033[1;97m";
	ft_print_column(contact.get_first_name());
	std::cout << "\033[1;95m|\033[1;97m";
	ft_print_column(contact.get_last_name());
	std::cout << "\033[1;95m|\033[1;97m";
	ft_print_column(contact.get_nickname());
	std::cout << "\033[1;95m|\033[1;97m" << std::endl;
	if (index + 1 < count)
				std::cout << "\033[1;95m|__________|__________|__________|__________|\033[0m" << std::endl;
}

bool	PhoneBook:: affiche_contact(int count)
{
	int index;

	index = -1;
	if (count == 0)
	{
		std::cout << "\033[1;31mThe contact list is empty please add a contact! [^_^]\033[0m" << std::endl;
		return false;
	}
	else
	{
		std::cout << "\033[1;95m ___________________________________________ " << std::endl;
		std::cout << "\033[1;95m|     Index|First Name| Last Name|  Nickname|" << std::endl;
		std::cout << "\033[1;95m|----------|----------|----------|----------|" << std::endl;
		while (++index < count)
			ft_affiche(this->contact[index] ,index ,count);
	}
	std::cout << "\033[1;95m|__________|__________|__________|__________|\033[0m" << std::endl;
	return (true);
}
