/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_utils1.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 08:25:41 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/05/20 00:56:19 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook:: add_contact(Contact c, int *i)
{

	this->contact[*i] = c;
}

void	PhoneBook::find_contact(std::string index)
{
	std::cout << "\033[1;97mFirst name : ";
	std::cout << this->contact[index[0] - 49].get_first_name()<< std::endl;
	std::cout << "Last name : ";
	std::cout << this->contact[index[0] - 49].get_last_name()<<std:: endl;
	std::cout << "Nick name : ";
	std::cout << this->contact[index[0] - 49].get_nickname()<< std::endl;
	std::cout << "Phone name : ";
	std::cout << this->contact[index[0] - 49].get_phone_number()<< std::endl;
	std::cout << "Darkset secret : ";
	std::cout << this->contact[index[0] - 49].get_darkest_secret()<< std::endl;
}

PhoneBook::PhoneBook()
{
	std::cout<< "\033[1;33m📞📞📞📞📞📞📞📞📞📞📞📞📞📞📞WELCOME TO YOUR PHONEBOOK📞📞📞📞📞📞📞📞📞📞📞📞📞📞📞" <<  std::endl;
}
PhoneBook::~PhoneBook()
{
	std::cout<< "\033[1;33m📞📞📞📞📞📞📞📞📞📞📞📞📞📞📞📞📞📞SEE YOU LATER📞📞📞📞📞📞📞📞📞📞📞📞📞📞📞📞📞📞"<< std::endl;
}	
