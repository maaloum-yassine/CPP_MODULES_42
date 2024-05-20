/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 02:11:05 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/05/20 00:38:04 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	ft_megaphone(char **av)
{
	while (*av)
	{
		while (**av)
		{
			if (**av >= 'a' && **av <= 'z')
				**av -= 32;
			std::cout << **av;
			(*av)++;
		}
		av++;
	}
}

int	main (int ac, char **av)
{
	if (ac > 1)
		ft_megaphone(++av);
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}
