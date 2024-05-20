/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 17:14:57 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/01/16 16:14:26 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern:: Intern()
{

}


Intern ::Intern(const Intern& cpy_Intern)
{
	*this = cpy_Intern;
}

Intern& Intern:: operator=(const Intern& cpy_Intern)
{
	(void)cpy_Intern;
	return *this;
}

AForm*	Intern:: get_FormPresidential(std::string const& target)
{
	return (new PresidentialPardonForm(target));
}


AForm*	Intern:: get_FormRobotomy(std::string const& target)
{
	return (new RobotomyRequestForm(target));
}


AForm*	Intern:: get_FormShrubbery(std::string const& target)
{
	return (new ShrubberyCreationForm(target));
}

const char * Intern::InvalidFormException :: what()const throw()
{
	return "Name form invalid";
}

AForm* Intern::	makeForm(const std::string& name,const std::string& target)
{
	AForm* (Intern::*all_forms[])(const std::string&) = {&Intern::get_FormPresidential, &Intern::get_FormRobotomy, &Intern::get_FormShrubbery};
	std :: string name_form[3] = {"shrubbery creation","robotomy request","presidential pardon"};

	int i;
	for (i = 0; i < 3; i++)
	{
		if (name == name_form[i])
			return (this->*all_forms[i])(target);
	}
	throw Intern::InvalidFormException();
	return NULL;
}

Intern:: ~Intern()
{

}
