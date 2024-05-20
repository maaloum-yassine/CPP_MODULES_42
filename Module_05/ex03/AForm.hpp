/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:07:16 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/01/13 12:31:06 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _AFORM_HPP
# define _AFORM_HPP

#include "Bureaucrat.hpp"

class AForm
{
	private :
		const std :: string _name;
		bool 				_signed;
		const unsigned int 	_gradeS;
		const unsigned int 	_gradeEx;
	public :
		AForm();
		AForm(const std :: string&, unsigned int, unsigned int);
		AForm(const AForm&);
		AForm& 					operator=(const AForm&);
		unsigned int 			getGradeS()const;
		unsigned int 			getGradeEX()const;
		bool 					getSigned()const ;
		const std :: string&  	getName()const;
		void					beSigned(const Bureaucrat &);
		virtual void 			execute( const Bureaucrat& executor ) const = 0;
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
		class FormNotSignedException: public std:: exception
		{
			const char* what() const throw();
		};
		virtual ~AForm();
};

std ::ostream& operator<<(std::ostream&,const AForm&);

#endif
