/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:07:16 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/01/15 16:32:08 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FORM_HPP
# define _FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
	private :
		const std ::string 	_name;
		bool 				_signed;
		const unsigned int 	_gradeS;
		const unsigned int 	_gradeEx;
	public :
		Form();
		Form(const std :: string& ,unsigned int , unsigned int);
		Form(const Form&);
		Form& 					operator=(const Form&);
		unsigned int 			getGradeS()const;
		unsigned int 			getGradeEX()const;
		bool 					getSigned()const ;
		const std :: string&  	getName()const;
		void					beSigned(const Bureaucrat &);
		/*************************************************/
		class GradeTooHighException: public std:: exception
		{
			const char* what() const throw();
		};
		/**************************************************/
		class GradeTooLowException: public std:: exception
		{
			const char* what() const throw();
		};
		/*************************************************/
		~Form();
};

std ::ostream& operator<<(std::ostream&,const Form&);

#endif
