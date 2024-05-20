/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 15:13:26 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/01/15 21:58:59 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm ::RobotomyRequestForm():AForm("Default<RobotomyRequestForm>",72,45),_target("Unkonw<Target>")
{

}


RobotomyRequestForm ::RobotomyRequestForm(const std :: string & target):AForm("Default<RobotomyRequestForm>",72,45),_target(target)
{
	std :: cout <<"Create RobotomyRequestForm " << AForm::getName() << " with Ss [^_^]" << std :: endl;
}


RobotomyRequestForm ::RobotomyRequestForm(const RobotomyRequestForm& cpy_RobotomyRequestForm):AForm(cpy_RobotomyRequestForm),_target(cpy_RobotomyRequestForm._target)
{

}

RobotomyRequestForm& RobotomyRequestForm:: operator=(const RobotomyRequestForm& cpy_RobotomyRequestForm)
{
	if (this != &cpy_RobotomyRequestForm)
		this->_target = cpy_RobotomyRequestForm._target;
	return *this;
}


std :: string RobotomyRequestForm :: getTarget()const
{
	return (this->_target);
}


void RobotomyRequestForm ::execute( const Bureaucrat& executor)const
{
	int	random_number;
	srand(time(0));
	if (executor.getGrade() > this->getGradeEX())
		throw AForm::GradeTooLowException();
	else if (!this->getSigned())
		throw AForm::FormNotSignedException();
	std::cout << _target << " working... ⏳" << std::endl;
	random_number = rand();
	if (random_number % 2 == 0)
		std::cout << _target << " has been robotomized successfully." << std::endl;
	else
		std :: cout << "Robotomy Failed. ❌ !" << std :: endl;
}

RobotomyRequestForm ::~RobotomyRequestForm()
{
	std :: cout << AForm::getName() << "is destroyed " << std :: endl;
}

std ::ostream& operator<<(std::ostream& out,const  RobotomyRequestForm& f)
{
	const AForm *tmp_f;
	tmp_f = &f;
	out << *tmp_f << std :: endl;
	out << "Target :" << f.getTarget();
	return out;
}

