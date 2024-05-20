/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 15:08:04 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/01/15 21:50:45 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private :
		std :: string	_target;
	public :
		PresidentialPardonForm();
		PresidentialPardonForm(const std :: string &);
		PresidentialPardonForm(const PresidentialPardonForm&);
		PresidentialPardonForm& operator=(const PresidentialPardonForm&);
		std :: string getTarget()const ;
		void execute( const Bureaucrat& executor)const;
		~PresidentialPardonForm();
};

std ::ostream& operator<<(std::ostream&,const PresidentialPardonForm&);

#endif
