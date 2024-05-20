/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 21:37:09 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/01/02 12:30:20 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_HPP
# define Cat_HPP

#include "Dog.hpp"

class Cat : public Animal
{
	public :
	// Constructors
	Cat();
	Cat(const std :: string&);
	Cat(const Cat&);
	// Assignment operator
	Cat& operator=(const Cat&);
	//Member function
	void	makeSound() const;
	//Destructor
	~Cat();

};

#endif
