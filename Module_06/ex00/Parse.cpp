/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parse.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 07:06:02 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/01/30 04:49:25 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

static std :: string trim (std :: string &arg)
{
	int	start;
	int	len;

	start = -1;
	len = arg.length();
	while (++start < len && std::isspace(arg[start]))
	;
	len ++;
	while (--len > start && std::isspace(arg[len - 1]))
	;
	return arg.substr(start, len - start);
}



static void	IsFloatOrdDouble(std :: string &arg, char &check, double &num_d)
{
	char	*ptr_end;
	bool	check_arg;

	check_arg = 0;
	for (int x = 0; x < (int)arg.length(); x++)
	{
		if (arg[x] == '.')
		{
			check_arg = 1;
			break ;
		}
	}
	num_d = std ::strtod(arg.c_str(), &ptr_end);
	if (check_arg == 0)
		return ;
	if (check == 'N' && !isnan(num_d))
	{
		if (ptr_end[0] == 'f' && !*(ptr_end + 1))
			check = 'F';
		else if (!*ptr_end)
			check = 'D';
	}
}


static void	Check_Arg(std :: string &arg, char &check)
{
	int	x;

	x = 0;
	arg = trim(arg);
	if (arg.length() == 1 && (arg[x] >= 0 && arg[x] <= 127 ))
	{
		check = 'C';
		return ;
	}

	if (arg[x] ==  '-' || arg[x] ==  '+')
		x++;
	check = 'I';
	for (;x < (int)arg.length(); x++)
	{
		if (!std::isdigit(arg[x]))
		{
			check = 'N';
			break ;
		}
	}
	if (check != 'N')
		return ;
}

void	CheckPseudoLiteralsAndType(std :: string &arg, char &check, double &num_d)
{
	std ::string	cpy_arg;
	char			check_sign;

	std :: string	Pseudo_literals[2] =
	{
		"inff" , "inf"
	};
	cpy_arg = trim(arg);
	if (!cpy_arg[0])
	{
		std :: cout << "Empty arg" << std ::endl;
		return ;
	}
	check_sign = 0;
	if (cpy_arg[0] == '+' || cpy_arg[0] == '-')
	{
		check_sign = 1;
		if (cpy_arg[0] == '-')
			check_sign = 2;
		cpy_arg = cpy_arg.substr(1);
	}
	for (int x = 0; x < 2; x++)
	{
		if (Pseudo_literals[x] == cpy_arg)
		{
			std :: cout << "Char		 : " 	<< "impossible\n"
						<< "int		 : " 	<< "impossible" << std :: endl;
			if (check_sign == 2)
			{
				std :: cout << "float		 : 	" << "-" + Pseudo_literals[0] << std :: endl;
				std :: cout << "double		 : 	" << "-" + Pseudo_literals[1] << std :: endl;
				return ;
			}
			std :: cout << "float		 : 	" << Pseudo_literals[0] << std :: endl;
			std :: cout << "double		 : 	" << Pseudo_literals[1] << std :: endl;
			return ;
		}
		else if (check_sign == 0 && (cpy_arg == "nan" || cpy_arg == "nanf"))
		{
			std :: cout << "Char		 : " << "impossible\n"
						<< "int		 : " << "impossible\n"
						<< "float		 : "	<< "nanf\n"
						<< "double		 : "	<< "nan";
			return ;
		}
	}
	Check_Arg(arg, check);
	IsFloatOrdDouble(arg, check, num_d);
}
