/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact2.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 07:05:50 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/05/20 00:44:11 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

//setters
void	Contact::set_first_name(std::string frst_name)
{
	first_name = frst_name;
}

void	Contact::set_last_name(std::string lst_name)
{
	last_name = lst_name;
}

void	Contact::set_nickname(std::string nickname)
{
	nick_name = nickname;
}

void	Contact::set_phone_number(std::string number)
{
	phone_number = number;
}

void	Contact::set_darkest_secret(std::string dark_secret)
{
	darkest_secret = dark_secret;
}



