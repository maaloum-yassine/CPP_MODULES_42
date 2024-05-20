/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:42:34 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/01/13 13:23:19 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"


AForm ::AForm():_name("Unkonw"),_signed(false),_gradeS(70),_gradeEx(70)
{

}

AForm ::AForm(const std :: string& name, unsigned int gradeToSign, unsigned int gradeToEx):_name(name),_signed(false),_gradeS(gradeToSign),_gradeEx(gradeToEx)
{

}

AForm :: AForm(const AForm& cpyAForm):_name(cpyAForm._name),_signed(cpyAForm._signed),_gradeS(cpyAForm._gradeS),_gradeEx(cpyAForm._gradeEx)
{

}


AForm& AForm :: operator=(const AForm& cpyAForm)
{
	if (this != &cpyAForm)
	{
		std::string& ref_name =const_cast<std::string&>(this->_name);
		ref_name = cpyAForm._name;
		unsigned int& ref__gradeS = const_cast<unsigned int&>(this->_gradeS);
		ref__gradeS = cpyAForm._gradeS;
		unsigned int& ref_signedE = const_cast<unsigned int&>(this->_gradeEx);
		ref_signedE = cpyAForm._gradeEx;
		this->_signed = cpyAForm._signed;
	}
	return *this;
}

unsigned int AForm :: getGradeS()const
{
	return (this->_gradeS);
}

unsigned int AForm :: getGradeEX()const
{
	return (this->_gradeEx);
}


const std :: string& AForm :: getName()const
{
	return (this->_name);
}

bool 	AForm :: 	getSigned()const
{
	return (this->_signed);
}

void AForm :: 	beSigned(const Bureaucrat& Brct)
{
	if (!(Brct.getGrade()<= this->_gradeS))
		throw AForm::GradeTooLowException();
	if (!this->_signed)
	{
		std :: cout << "Form " <<  this->_name << " is signed " << std :: endl;
		this->_signed = 1;
	}
}

const char* AForm::GradeTooHighException  ::  what()const throw()
{
	return "Grade Too High [^_^] !";
}

const char* AForm::GradeTooLowException  ::  what()const throw()
{
	return "Grade Too Low [^_^] !";
}

const char * AForm::FormNotSignedException  ::  what()const throw()
{
	return "Form Not Signed [^_^]";
}


AForm ::~AForm()
{

}

std ::ostream& operator<<(std::ostream& out,const  AForm& f)
{
	out << "AForme " << f.getName() << " the grade to sign " << f.getGradeS() << " the grade to executed " << f.getGradeEX();
	return out;
}
