/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prog_utils.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 05:14:38 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/05/20 00:50:51 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static	bool	check_is_empty(std::string *input)
{
	int	i;

	i = -1;
	while ((*input)[++i])
	{
		if ((*input)[i] != '\t' && (*input)[i] != ' ')
				return (true);
	}
	return (false);
}

void	ft_add(std::string *input, std::string text)
{

	std::cout << text << std::endl;
	while (std::getline(std::cin, *input))
	{
		if ((*input)[0] != '\0')
		{
			if (check_is_empty(input) == true)
				break ;
			else
			{
				std::cout <<
					"\033[1;31mYour text is filled by space character enter text please\033[0m" << std::endl;
					(*input)[0] = '\0';
			}
		}
		std::cout << text << std::endl;
	}
}

bool	ft_add(PhoneBook *phonebook, int *i)
{
	std::string		input;
	Contact 		Contact;

	ft_add(&input, "\033[1;97mPlease enter first name:\033[1;96m");
	if (input[0] == '\0')
		return (false);
	Contact.set_first_name(input);
	ft_add(&input, "\033[1;97mPlease enter last name:\033[1;96m");
	if (input[0] == '\0')
		return (false);
	Contact.set_last_name(input);
	ft_add(&input, "\033[1;97mPlease enter nick name:\033[1;96m");
	if (input[0] == '\0')
		return (false);
	Contact.set_nickname(input);
	ft_add(&input, "\033[1;97mPlease enter phone number:\033[1;96m");
	if (input[0] == '\0')
		return (false);
	Contact.set_phone_number(input);
	ft_add(&input, "\033[1;97mPlease enter darkset secret:\033[1;96m");
	if (input[0] == '\0')
		return (false);
	Contact.set_darkest_secret(input);
	phonebook->add_contact(Contact, i);
	(*i)++;
	return (true);
}


bool	ft_search_contact(PhoneBook *phonebook, int count)
{
	std::string 	index;
	int				i;

	i = 0;
	std::cout << "\033[1;33m\n*********The contact index must be between [1,"
				<< count << "]*********\033[0m" << std::endl;
	ft_add(&index,
				"\033[1;97mPlease enter the index of the contact you want:\033[1;96m");
	if (index[0] == '\0')
		return (false);
	while (index[i])
		i++;
	if (i > 1 || index[0] - 48  > count
			|| (!(index[0] >= '1' && index[0] <= '8')))
		std::cout << "\033[1;31mIndex contact '"
					<< index << "' not found! [^_^]\033[0m" << std::endl;
	else
		phonebook->find_contact(index);
	return (true);
}
