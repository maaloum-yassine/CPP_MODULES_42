/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 15:12:48 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/01/15 21:50:35 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "PresidentialPardonForm.hpp"

class RobotomyRequestForm : public AForm
{
	private :
		std :: string	_target;
	public :
		RobotomyRequestForm();
		RobotomyRequestForm(const std :: string &);
		RobotomyRequestForm(const RobotomyRequestForm&);
		RobotomyRequestForm& operator=(const RobotomyRequestForm&);
		std :: string getTarget()const ;
		void execute( const Bureaucrat& executor)const;
		~RobotomyRequestForm();
};

std ::ostream& operator<<(std::ostream&,const RobotomyRequestForm&);

#endif
