/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 14:31:41 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/05/20 04:00:43 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "easyfind.hpp"
#include <vector>
#include <array>


void CheckStr(std :: string & input, bool &check)
{
	for(size_t i = 0; i < input.length(); ++i)
	{
		if (i == 0)
		{
			while ((input[i] == '\t' || input[i] == ' ') && input[i] )
				i++;
		}
		if (!isdigit(input[i]))
		{
			check = false;
			break ;
		}
	}
}

void	Test1()
{
	try
	{
		std::array<int, 5>arr = {5, 3 ,6 , 8, 9};
		easyfind(arr,8);
	}
	catch(std :: string &ex)
	{
		std :: cout << ex << std :: endl;
	}
}

void	Test2()
{
	try
	{
		std :: string	input;
		std::vector<int>a;
		bool	check;

		for (int i = 0 ; i < 5;  i++)
		{
			check = true;
			std :: cout << "Enter nomber :" << std :: endl;
			std::getline(std::cin,input);
			if (std::cin.eof())
				break ;
			else if (input[0] == '\0')
				check = false;
			CheckStr(input, check);
			if (!check)
			{
				std :: cout << "Warring number mast be  Integer" << std :: endl;
				--i;
			}
			else
				a.push_back(std::atoi(input.c_str()));
		}

		while (1)
		{
			check = true;
			std :: cout << "Enter number who you want to find : " << std :: endl;
			std::getline(std::cin, input);
			if (std::cin.eof())
				break ;
			else if (input[0] == '\0')
				check = false;
			CheckStr(input, check);
			if (!check)
				std :: cout << "Warring number mast be  Integer" << std :: endl;
			else
			{
				easyfind(a, std::atoi(input.c_str()));
				break ;
			}
		}
	}
	catch (std :: string &ex)
	{
		std :: cout << ex << std :: endl;

	}
}


int main ( void )
{
	/********************TEST1*******************************/
	Test1();
	/********************TEST2*******************************/
	Test2();
	/********************************************************/
	return (0);
}
