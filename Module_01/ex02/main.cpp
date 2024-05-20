/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 17:15:58 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/05/20 01:38:44 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int main (void)
{
	std :: string str;

	str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std :: string &stringREF = str;
	/************************************************************************************/
	std :: cout << "The memory address of the string = " << &str << std::endl;
	std :: cout << "The memory address held by stringPTR = " << stringPTR << std::endl;
	std :: cout << "The memory address held by stringREF = " << &stringREF << std::endl;
	/*************************************************************************************/
	std :: cout << "The value of the string = " << str << std::endl;
	std :: cout << "The value pointed to by stringPTR = " << *stringPTR << std::endl;
	std :: cout << "The value pointed to by stringREF = " << stringREF << std::endl;
	return (0);
}
