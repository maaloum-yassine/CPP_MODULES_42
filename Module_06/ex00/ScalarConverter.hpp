/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:28:21 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/01/30 04:53:32 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SCALARCONVERTER_HPP
#define _SCALARCONVERTER_HPP

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <limits.h>

class ScalarConverter
{
	ScalarConverter();
	ScalarConverter(const ScalarConverter&);
	ScalarConverter& operator=(const ScalarConverter&);
	~ScalarConverter();
	public :
		static	void	Convert(std ::string&);
};

void	CheckPseudoLiteralsAndType(std :: string &, char &, double &);
#endif

