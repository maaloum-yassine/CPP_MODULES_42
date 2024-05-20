/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 06:42:33 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/05/20 00:44:26 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
	private :
		std::string		first_name;
		std::string 	last_name;
		std::string		nick_name;
		std::string		phone_number;
		std::string		darkest_secret;
	public :
		//setters
		void	set_first_name(std::string frst_name);
		void	set_last_name(std::string lst_name);
		void	set_nickname(std::string nickname);
		void	set_phone_number(std::string number);
		void	set_darkest_secret(std::string dark_secret);
		void	set_new(std::string str1, std::string str2);
		//getters
		std::string	get_first_name();
		std::string	get_last_name();
		std::string	get_nickname();
		std::string	get_phone_number();
		std::string	get_darkest_secret();
};

#endif
