/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 18:58:26 by ymaaloum          #+#    #+#             */
/*   Updated: 2023/12/26 22:23:32 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public :
		// Constructors
		Dog();
		Dog(const std :: string&);
		Dog(const Dog&);
		// Assignment operator
		Dog& operator=(const Dog&);
		//Member function
		void	makeSound() const;
		//Destructor
		~Dog();
};

#endif
