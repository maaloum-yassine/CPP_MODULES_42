/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 22:11:47 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/01/03 03:17:28 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		const Animal* meta 		= new Animal();
		const Animal* j 		= new Dog();
		const Animal* i 		= new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();

		delete 	meta;
		delete 	j ;
		delete 	i ;
	}
	{
		std :: cout << "********<<WrongAnimal>>*************<<WrongCat>>**************" << std :: endl;
		const WrongAnimal *meta	= 	new WrongAnimal();
		const WrongAnimal	*i 	= 	new WrongCat();

		std::cout << meta->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		meta->makeSound();

		delete 	meta;
		delete 	i ;
	}
	return(0);
}
