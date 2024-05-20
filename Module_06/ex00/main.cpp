/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:28:23 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/01/18 17:20:13 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


int main (int ac, char **av)
{
	if (ac == 2)
	{
		std :: string Arg = av[1];
		ScalarConverter::Convert(Arg);
	}
	else
		std :: cerr << "The program must take a single argument [^_^] !" << std :: endl;

	return (0);
}
