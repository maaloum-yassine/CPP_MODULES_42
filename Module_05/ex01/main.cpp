/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 08:08:08 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/01/15 21:28:49 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main ()
{
	try
	{
		Bureaucrat B("BUR/*/*/", 50);
		Form f;
		f.beSigned(B);
		B.signForm(f);
	}
	catch (const std ::exception &ex)
	{
		std :: cout << ex.what() << std :: endl;
	}
	return (0);
}
