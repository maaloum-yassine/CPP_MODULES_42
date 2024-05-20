/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 18:51:31 by ymaaloum          #+#    #+#             */
/*   Updated: 2023/12/26 23:10:41 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ANIMAl_HPP
# define _ANIMAl_HPP
#include <iostream>

class Animal
{
	//Attributs
	protected :
		std::string _Type;
	public :
		// Constructors
		Animal();
		Animal(const std:: string&);
		Animal(const Animal&);
		// Assignment operator
		Animal& 		operator=(const Animal&);
		//getters and setters
		void			setType(const std :: string&);
		std :: string 	getType() const ;
		//Member function
		virtual void	makeSound() const;
		//Destructor
		virtual ~Animal();
};


#endif
