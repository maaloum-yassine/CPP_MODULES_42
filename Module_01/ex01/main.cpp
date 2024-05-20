/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 03:55:52 by ymaaloum          #+#    #+#             */
/*   Updated: 2023/12/14 03:42:22 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

static	void	creat_zombie_objects(int number)
{
	Zombie	*z;

	z = zombieHorde(number, "zombie");
	delete[] z;
	std :: cout << "\033[1;33mthe program is finished [^_^]" <<  std :: endl;
}


static	bool check_string(const char input[])
{
	int	i;

	i = 0;
	while (input[i])
	{
		if (isalpha(input[i++]))
			return (false);
	}
	return (true);
}

static	void	prog()
{
	std::string	input;
	int			num;

	std::cout	<< "\033[1;32mEnter the positive integer of objects you want to allocate "
				<< "\033[1;97m"<< std::endl;
	std :: getline (std::cin, input);
	if (input[0])
	{
		if (check_string(input.c_str()))
		{
			num = atoi(input.c_str());
			if (!(num <= 0))
				creat_zombie_objects(num);
		}
		else
			std::cout	<< "\033[1;31mInput must be positive number "
				<< "\033[1;97m"<< std::endl;
	}
	else
		std::cout	<< "\033[1;31mInput is empty "
				<< "\033[1;97m"<< std::endl;
}

int main (void)
{
	prog();
	return (0);
}
