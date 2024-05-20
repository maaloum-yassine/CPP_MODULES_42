/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 21:37:09 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/01/03 04:13:25 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_HPP
# define Cat_HPP

#include "Dog.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	private :
		Brain*  brain;
	public :
	// Constructors
	Cat();
	Cat(const std :: string&);
	Cat(const Cat&);
	// Assignment operator
	Cat& operator=(const Cat&);
	//getters and setters
	void				set_Brain(const Brain&);
	Brain* 				get_Brain()const;
	//Member function
	void	makeSound() const;
	//Destructor
	~Cat();

};

#endif
