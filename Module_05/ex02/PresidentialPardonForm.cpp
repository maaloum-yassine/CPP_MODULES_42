/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 08:29:29 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/01/15 16:44:45 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm ::PresidentialPardonForm():AForm("Default<PresidentialPardonForm>",25,5),_target("Unkonw<Target>")
{

}


PresidentialPardonForm ::PresidentialPardonForm(std :: string & target):AForm("Default<PresidentialPardonForm>",25,5),_target(target)
{

}


PresidentialPardonForm ::PresidentialPardonForm(const PresidentialPardonForm& cpy_PresidentialPardonForm):AForm(cpy_PresidentialPardonForm),_target(cpy_PresidentialPardonForm._target)
{

}

PresidentialPardonForm& PresidentialPardonForm:: operator=(const PresidentialPardonForm& cpy_PresidentialPardonForm)
{
	if (this != &cpy_PresidentialPardonForm)
		this->_target = cpy_PresidentialPardonForm._target;
	return *this;
}


std :: string PresidentialPardonForm :: getTarget()const
{
	return (this->_target);
}


void PresidentialPardonForm ::execute( const Bureaucrat& executor)const
{
	if (executor.getGrade() > this->getGradeEX())
		throw AForm::GradeTooLowException();
	else if (!this->getSigned())
		throw AForm::FormNotSignedException();
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm ::~PresidentialPardonForm()
{

}


std ::ostream& operator<<(std::ostream& out,const  PresidentialPardonForm& f)
{
	const AForm *tmp_f;
	tmp_f = &f;
	out << *tmp_f << std :: endl;
	out << "Target :" << f.getTarget();
	return out;
}
