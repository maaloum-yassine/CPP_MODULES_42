/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 23:13:17 by ymaaloum          #+#    #+#             */
/*   Updated: 2023/12/26 23:35:21 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef _WRONG_HPP
# define _WRONG_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public :
	// Constructors
	WrongCat();
	WrongCat(const std :: string&);
	WrongCat(const WrongCat&);
	// Assignment operator
	WrongCat& operator=(const WrongCat&);
	//Member function
	void	makeSound() const;
	//Destructor
	~WrongCat();
};

#endif
