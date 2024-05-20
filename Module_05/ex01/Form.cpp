/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:42:34 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/01/15 21:41:33 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


Form ::Form():_name("Unkonw"),_signed(false),_gradeS(70),_gradeEx(70)
{

}

Form ::Form(const std :: string& name, unsigned int gradeToSign, unsigned int gradeToEx):_name(name),_signed(false),_gradeS(gradeToSign),_gradeEx(gradeToEx)
{

}

Form :: Form(const Form& cpyForm):_name(cpyForm._name),_gradeS(cpyForm._gradeS),_gradeEx(cpyForm._gradeEx)
{
	this->_signed = cpyForm._signed;
}


Form& Form :: operator=(const Form& cpyForm)
{
	if (this != &cpyForm)
	{
		std::string& ref_name =const_cast<std::string&>(this->_name);
		ref_name = cpyForm._name;
		unsigned int& ref__gradeS = const_cast<unsigned int&>(this->_gradeS);
		ref__gradeS = cpyForm._gradeS;
		unsigned int& ref_signedE = const_cast<unsigned int&>(this->_gradeEx);
		ref_signedE = cpyForm._gradeEx;
		this->_signed = cpyForm._signed;
	}
	return *this;
}

unsigned int Form :: getGradeS()const
{
	return (this->_gradeS);
}

unsigned int Form :: getGradeEX()const
{
	return (this->_gradeEx);
}


const std :: string& Form :: getName()const
{
	return (this->_name);
}

bool 	Form :: 	getSigned()const
{
	return (this->_signed);
}

void Form :: beSigned(const Bureaucrat& Brct)
{
	if (!(Brct.getGrade()<= this->_gradeS))
		throw Form::GradeTooLowException();
	if (!this->_signed)
	{
		std :: cout << "Form " <<  this->_name << " is signed " << std :: endl;
		this->_signed = 1;
	}
}

const char* Form::GradeTooHighException  ::  what()const throw()
{
	return "Grade Too High [^_^] !";
}

const char* Form::GradeTooLowException  ::  what()const throw()
{
	return "Grade Too Low [^_^] !";
}


Form ::~Form()
{

}


std ::ostream& operator<<(std::ostream& out,const Form& f)
{
	out << "Forme " << f.getName() << " the grade to sign " << f.getGradeS() <<  " the grade to execute " << f.getGradeEX();
	return out;
}
