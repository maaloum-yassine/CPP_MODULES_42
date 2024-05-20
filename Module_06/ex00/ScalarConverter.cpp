/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:28:18 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/05/20 03:58:11 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


ScalarConverter:: ScalarConverter()
{

}


ScalarConverter:: ScalarConverter(const ScalarConverter& cpy_ScalarConverter)
{
	*this = cpy_ScalarConverter;
}


ScalarConverter&  ScalarConverter :: operator=(const ScalarConverter& cpy_ScalarConverter)
{

	(void)cpy_ScalarConverter;
	return *this;
}

void	Casting(std ::string& Arg ,double &d, char &check)
{
	std:: cout << std::fixed;
	if (check == 'C' && (!(Arg[0] >= 48 && Arg[0] <= 57)))
	{
		if (!(Arg[0] >= 48 && Arg[0] <= 57))
			std :: cout 	<< "Char		 : " <<	Arg[0] << std :: endl;
		else
			std :: cout 	<< "Char		 : " <<	" Non displayable" << std :: endl;
		std :: cout << "int		 : "	<<	static_cast<int>(Arg[0]) << std :: endl;
		std :: cout << "float		 : "	<< std::setprecision(1)	<< static_cast<float>(Arg[0]) << "f" <<std :: endl;
		std :: cout << "double		 : "	<< std::setprecision(1)	<< static_cast<double>(Arg[0]) << std :: endl;
		return ;
	}
	if (d >= 32 && d <= 126)
		std :: cout 	<< "Char		: " <<static_cast<char>(d) << std :: endl;
	else if (!(d > 127 || d < 0))
		std :: cout << "Char		: " <<	"Non displayable" << std :: endl;
	else
		std :: cout 	<< "Char		: " << "impossible" << std :: endl;
	if (d > INT_MAX || d < INT_MIN)
		std :: cout << "int		: "	<<	"impossible << exceed size int >>" << std :: endl;
	else
		std :: cout << 	"int		: "		<<			static_cast<int>(d) 	<< std :: endl;
	std :: cout << 		"float		: "		<<			std::setprecision(2) 	<< static_cast<float>(d) << "f" << std :: endl;
	std :: cout <<		"double		: "		<<			std::setprecision(2)	<< static_cast<double>(d) << std :: endl;
}

void	ScalarConverter :: Convert(std ::string& Arg)
{
	char	CheckContent;
	double	num_d;

	CheckContent = 0;
	CheckPseudoLiteralsAndType(Arg, CheckContent, num_d);
	if (CheckContent == 'N')
	{
		std :: cout 	<< "Char		 : " << "impossible\n"
						<< "int		 : " << "impossible\n"
						<< "float		 : "	<< "impossible\n"
						<< "double		 : "	<< "impossible";
	}
	else if (CheckContent != 0)
		Casting(Arg ,num_d, CheckContent);
}

ScalarConverter:: ~ScalarConverter()
{

}
