/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 18:58:26 by ymaaloum          #+#    #+#             */
/*   Updated: 2023/12/29 04:49:47 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private :
		Brain*  brain;
	public :
		// Constructors
		Dog();
		Dog(const std :: string&);
		Dog(const Dog&);
		// Assignment operator
		Dog& operator=(const Dog&);
		//getters and setters
		void		set_Brain(const Brain&);
		Brain* 		get_Brain()const;
		//Member function
		void	makeSound() const;
		//Destructor
		~Dog();
};

#endif
