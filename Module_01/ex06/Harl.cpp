/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:29:25 by ymaaloum          #+#    #+#             */
/*   Updated: 2023/12/15 04:55:58 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


Harl :: Harl()
{
	return ;
}

Harl :: ~Harl()
{
	return ;
}


void	Harl :: debug(void)
{
	std :: cout << "[DEBUG]" << std::endl;
	std :: cout << "I love having extra bacon "
				<<"for my 7XL-double-cheese-triple-pickle-specialketchup burger."
				<<" I really do!" << std ::endl;
}

void	Harl :: info(void)
{
	std :: cout << "[INFO]" << std::endl;
	std :: cout << "I cannot believe adding extra bacon costs more money."
				<< " You didn’t put enough bacon in my burger! If you did,"
				<<" I wouldn’t be asking for more!"<< std ::endl;
}

void	Harl :: warning(void)
{
	std :: cout << "[WARNING]" << std::endl;
	std :: cout << "I think I deserve to have some extra bacon for free."
				<< ". I’ve been coming for years whereas you started"
				<<" working here since last month."<< std ::endl;
}

void	Harl :: error(void)
{
	std :: cout << "[ERROR]" << std::endl;
	std :: cout << "This is unacceptable! I want to speak to the manager now."<< std ::endl;
}

void	 Harl ::  complain(std::string level)
{
	void (Harl::*ptr[4])(void) = {&Harl::debug,&Harl::info,&Harl::warning, &Harl::error};
	std ::string arr[4]= {"DEBUG", "INFO", "WARNING", "ERROR"};

	int	i;
	i = -1;
	while (++i < (int)(sizeof (arr)/ sizeof (std:: string)))
	{
		if (arr[i] == level)
		{
			(this->*ptr[i])();
			i = 4;
		}
	}
}
