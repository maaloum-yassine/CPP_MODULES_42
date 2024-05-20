/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 18:58:26 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/01/03 04:15:28 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
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
