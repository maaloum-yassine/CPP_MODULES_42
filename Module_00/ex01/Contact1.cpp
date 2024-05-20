/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact1.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 06:43:03 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/05/20 00:44:28 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

//getters

std::string	Contact::get_first_name()
{
	return first_name;
}

std::string	Contact::get_last_name()
{
	return last_name;
}

std::string	Contact::get_nickname()
{
	return nick_name;
}

std::string	Contact::get_phone_number()
{
	return phone_number;
}

std::string	Contact::get_darkest_secret()
{
	return darkest_secret;
}
