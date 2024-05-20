/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 08:08:08 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/01/15 16:35:10 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ()
{
	try
	{
		Bureaucrat B1;
		std :: cout << B1 << std :: endl;
		Bureaucrat B2("BRCRT 2", 50);
		Bureaucrat B3("BRCRT 3", 200);
	}
	catch(const std ::exception &ex)
	{
		std :: cerr << ex.what() << std :: endl;
	}
	std :: cout << "FINISH PROG [^_^]" << std :: endl;
	return (0);
}
