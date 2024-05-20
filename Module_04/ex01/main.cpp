/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 22:11:47 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/01/03 03:52:29 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

# define SIZE_ANIMAL 4


int main()
{

	{
		/*************************test cpy_obj ./Animal > txt *************************/
		Dog do1;
		Dog do2(do1);
		std :: string name[100];
		for (int i = 0 ; i < 100 ; i++)
			name[i] = "|*|~|*|";
		do1.get_Brain()->set_all_ideas(name);
		const std :: string(&tab)[100] = do1.get_Brain()->get_all_Ideas();
		const std :: string(&_tab)[100] = do2.get_Brain()->get_all_Ideas();
		for (int i = 0 ; i < 100; i++)
			std :: cout << tab[i] << std :: endl;
		for (int i = 0 ; i < 100; i++)
		std :: cout << _tab[i] << std :: endl;
	}
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;//should not create a leak
		delete i;
	}
	{
		Animal** animal = new Animal *[SIZE_ANIMAL];
		for (int i = 0; i < SIZE_ANIMAL ; i++)
		{
			if (i < SIZE_ANIMAL / 2 )
				animal[i] = new Dog();
			else
				animal[i] = new Cat();
		}
		// Free allocated memory
		for (int i = 0; i < SIZE_ANIMAL ; i++)
			delete animal[i];
		delete[] animal;

	}
	return 0;
}
