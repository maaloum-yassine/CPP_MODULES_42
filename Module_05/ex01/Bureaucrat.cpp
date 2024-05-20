/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 08:01:28 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/01/15 16:31:39 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Bureaucrat ::Bureaucrat():_name("Unknow"),_grade(10)
{
	std :: cout <<"Create bureaucrat " << _name << " with Ss [^_^]" << std :: endl;
}

Bureaucrat :: Bureaucrat(const std :: string& name, unsigned int grade):_name(name)
{
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	_grade = grade;
	std :: cout << "Create bureaucrat " << _name << " with Ss [^_^]" << std :: endl;
}

Bureaucrat :: Bureaucrat(const Bureaucrat& cpyBureaucrat):_name(cpyBureaucrat._name)
{
	std :: cout <<"Create bureaucrat Cpy " << _name << " with Ss [^_^]" << std :: endl;
	this->_grade = cpyBureaucrat._grade;
}


Bureaucrat& Bureaucrat ::operator=(const Bureaucrat& cpyBureaucrat)
{
	if (this != &cpyBureaucrat)
	{
		this->_grade = cpyBureaucrat._grade;
		std::string& ref_name =const_cast<std::string&>(this->_name);
		ref_name = cpyBureaucrat._name;
	}
	return *this;
}


unsigned int Bureaucrat :: getGrade() const
{
	return (this->_grade);
}


const std :: string& Bureaucrat :: getName() const
{
	return (this->_name);
}

void	Bureaucrat :: incrementGrade()
{
	if (_grade == 1)
		throw  Bureaucrat ::GradeTooHighException();
	_grade--;
}

void	Bureaucrat :: decrementGrade()
{
	if (_grade == 150)
		throw Bureaucrat ::GradeTooLowException();
	_grade++;
}

const char* Bureaucrat::GradeTooHighException :: what()const throw()
{
	return "Grade Too High :: the highest value of the grade is 1 [^_^] !";
}

const char* Bureaucrat::GradeTooLowException  ::  what()const throw()
{
	return "Grade Too Low :: The smallest value of the grade is 150 [^_^]!";
}

void	Bureaucrat:: signForm(Form& frm)
{
	try
	{
		frm.beSigned(*this);
		std :: cout << *this << "signed " << frm;
	}
	catch (const std ::exception& ex)
	{
		std :: cout << *this << " couldn’t sign " << frm << " because " << ex.what();
	}

}

Bureaucrat ::~Bureaucrat()
{

}

std::ostream& operator<<(std::ostream& out ,const Bureaucrat& Brct)
{
	out << "Bureaucrat " <<  Brct.getName() << " Have " << Brct.getGrade() << " of grade";
	return out;
}

