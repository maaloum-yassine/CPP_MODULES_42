/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:32:20 by ymaaloum          #+#    #+#             */
/*   Updated: 2023/12/15 05:38:59 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


static void	ft_print_err()
{
	std :: cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

static	int	get_index(std :: string arg)
{
	std ::string arr[4]= {"DEBUG", "INFO", "WARNING", "ERROR"};

	int	i;

	i = -1;
	while (++i < 4)
	{
		if (arg == arr[i])
			return (i);
	}
	return (i);
}

static	void	ft_prog(Harl &harl, std :: string arg)
{
	switch(get_index(arg))
	{
		case 0 :
			harl.complain("DEBUG");
		case 1 :
			harl.complain("INFO");
		case 2 :
			harl.complain("WARNING");
		case 3 :
			harl.complain("ERROR");
			break ;
		default :
			ft_print_err();
	}
}

int main (int ac, char **av)
{
	Harl	harl;

	if (ac == 2)
	{
		std :: string arg = av[1];
		ft_prog(harl, arg);
	}
	else
		ft_print_err();
	return (0);
}
