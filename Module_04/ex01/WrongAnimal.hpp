/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 23:10:37 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/01/03 03:53:22 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WRONGANIMAl_HPP
# define _WRONGANIMAl_HPP


#ifndef IOSTERAM
	#include <iostream>
#endif


class WrongAnimal
{
	//Attributs
	protected :
		std::string _Type;
	public :
		// Constructors
		WrongAnimal();
		WrongAnimal(const std:: string&);
		WrongAnimal(const WrongAnimal&);
		// Assignment operator
		WrongAnimal& 		operator=(const WrongAnimal&);
		//getters and setters
		void			setType(const std :: string&);
		std :: string 	getType() const ;
		//Member function
		void	makeSound() const;
		//Destructor
		~WrongAnimal();
};


#endif
