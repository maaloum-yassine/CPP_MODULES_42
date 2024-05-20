/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 10:52:04 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/01/15 17:44:21 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm ::ShrubberyCreationForm():AForm("Default<ShrubberyCreationForm>",72,45),_target("Unkonw<Target>")
{

}


ShrubberyCreationForm ::ShrubberyCreationForm(const std :: string & target):AForm("Default<ShrubberyCreationForm>",72,45),_target(target)
{

}


ShrubberyCreationForm ::ShrubberyCreationForm(const ShrubberyCreationForm& cpy_ShrubberyCreationForm):AForm(cpy_ShrubberyCreationForm),_target(cpy_ShrubberyCreationForm._target)
{

}


ShrubberyCreationForm& ShrubberyCreationForm:: operator=(const ShrubberyCreationForm& cpy_ShrubberyCreationForm)
{
	if (this != &cpy_ShrubberyCreationForm)
		this->_target = cpy_ShrubberyCreationForm._target;
	return *this;
}


std :: string ShrubberyCreationForm :: getTarget()const
{
	return (this->_target);
}


const char * ShrubberyCreationForm :: ExceptionOpenFile ::  what() const throw()
{
	return ("ERREUR OPEN FILE [^_^]!");
}

void ShrubberyCreationForm ::execute( const Bureaucrat& executor)const
{
	if (executor.getGrade() > this->getGradeEX())
		throw AForm::GradeTooLowException();
	else if (!this->getSigned())
		throw AForm::FormNotSignedException();
	std ::ofstream	file;
	file.open((this->_target+"_shrubbery").c_str());
	if (!file.is_open())
		throw ShrubberyCreationForm :: ExceptionOpenFile();
	file <<	"    *   \n" <<
			"   *** \n" <<
			"  ***** \n" <<
			" ******* \n" <<
			"********* \n" <<
			"   ||| " << std :: endl;
	file.close();
}

ShrubberyCreationForm ::~ShrubberyCreationForm()
{

}

std ::ostream& operator<<(std::ostream& out,const  ShrubberyCreationForm& f)
{
	const AForm *tmp_f;
	tmp_f = &f;
	out << *tmp_f << std :: endl;
	out << "Target :" << f.getTarget();
	return out;
}
