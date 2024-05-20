/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 17:11:25 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/01/16 14:52:50 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP


#include "ShrubberyCreationForm.hpp"

class Intern
{
	public :
		Intern();
		Intern(const Intern&);
		Intern& operator=(const Intern&);
		AForm	*get_FormPresidential(std::string const&);
		AForm	*get_FormRobotomy(std::string const&);
		AForm	*get_FormShrubbery(std::string const&);
		AForm	*makeForm(std::string const&, std::string const &);
		/********************************************************/
		class InvalidFormException : public std::exception
		{
			virtual const char* what() const throw();
		};
		/********************************************************/
		~Intern();
};

#endif
