/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 15:01:13 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/01/15 21:50:39 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "RobotomyRequestForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
	private :
		std :: string	_target;
	public :
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std :: string &);
		ShrubberyCreationForm(const ShrubberyCreationForm&);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm&);
		std :: string getTarget()const ;
		void execute( const Bureaucrat& executor)const;
		/******************************************************/
		class ExceptionOpenFile: public std:: exception
		{
			const char* what() const throw();
		};
		/******************************************************/
		~ShrubberyCreationForm();
};

std ::ostream& operator<<(std::ostream&,const ShrubberyCreationForm&);

#endif
