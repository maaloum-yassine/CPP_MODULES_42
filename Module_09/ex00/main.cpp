/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:28:20 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/03/12 22:14:06 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main (int ac, char **av)
{
	if (ac == 2)
		BitcoinExchange::btc(std::string(av[1]));
	else
	{
		std :: cerr << "ERROR❌: THE PROGRAM TAKES ONE ARGUMENT AS THE FILE PATH IN .CSV FORMAT" << std :: endl;
		exit(EXIT_FAILURE);
	}
	return (0);
}
