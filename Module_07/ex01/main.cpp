/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 23:25:02 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/02/12 05:03:30 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	/*******************************************/
	int array[] = {1, 3, 3, 7};
	iter<int , void(*)(int&)>(array, sizeof(array) / sizeof(int), print);
	/*******************************************/

	std :: string array_str[] = {"MED" , "MOROCCO"};
	iter(array_str, sizeof(array_str) / sizeof(std::string), print<std::string>);

	return 0;
}

