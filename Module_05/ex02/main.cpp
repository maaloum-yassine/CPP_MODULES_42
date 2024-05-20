/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 08:08:08 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/01/16 16:20:28 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

int main ()
{
	try
	{
		Bureaucrat bl("AGHROUSS", 1);
		AForm *f1 = new ShrubberyCreationForm();
		AForm *f2 = new RobotomyRequestForm();
		AForm *f3 = new PresidentialPardonForm();
		bl.signForm(*f1);
		bl.signForm(*f2);
		bl.signForm(*f3);
		f1->execute(bl);
		f2->execute(bl);
		f3->execute(bl);
	}
	catch(const std :: exception& ex)
	{
		std :: cout << ex.what() << std :: endl;
	}
	return (0);
}
