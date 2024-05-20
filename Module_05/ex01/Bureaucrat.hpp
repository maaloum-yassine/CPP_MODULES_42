/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 08:01:00 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/01/15 15:52:17 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  _BUREAUCRAT_HPP
# define _BUREAUCRAT_HPP

#include <iostream>

class Form;
class Bureaucrat
{
	private :
		const std :: string		_name;
		unsigned int 			_grade;
	public :
		Bureaucrat();
		Bureaucrat(const std :: string&, unsigned int);
		Bureaucrat(const Bureaucrat&);
		Bureaucrat& 			operator=(const Bureaucrat&);
		unsigned int 			getGrade() const;
		const std :: string& 	getName() const;
		/************************************************/
		void					incrementGrade();
		void					decrementGrade();
		void					signForm(Form&);
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
		~Bureaucrat();
};

std ::ostream& operator<<(std::ostream&,const Bureaucrat&);

#endif
