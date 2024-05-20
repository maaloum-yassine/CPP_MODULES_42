/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 18:51:31 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/01/03 04:13:54 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _AANIMAl_HPP
# define _AANIMAl_HPP
#include <iostream>

class AAnimal
{
	//Attributs
	protected :
		std::string _Type;
	public :
		// Constructors
		AAnimal();
		AAnimal(const std:: string&);
		AAnimal(const AAnimal&);
		// Assignment operator
		AAnimal& 		operator=(const AAnimal&);
		//getters and setters
		void			setType(const std :: string&);
		std :: string 	getType() const ;
		//Member function
		virtual void	makeSound() const = 0;
		//Destructor
		virtual ~AAnimal();
};


#endif
