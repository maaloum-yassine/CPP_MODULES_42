/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 06:27:05 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/03/22 03:51:16 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Rpn.hpp"

int main (int ac, char **av)
{

	if (ac == 2)
	{
		Rpn r((std::string(av[1])));
		// Rpn r2(r);
	}

	else
	{
		std :: cerr << "ERREUR ARGUMENT" << std :: endl;
		return(1);
	}

	return (0);
}
