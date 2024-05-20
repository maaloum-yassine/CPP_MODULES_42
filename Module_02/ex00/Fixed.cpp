/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:09:23 by ymaaloum          #+#    #+#             */
/*   Updated: 2023/12/15 09:27:36 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed :: Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixed_point = 0;
}


Fixed ::	Fixed(const Fixed& F)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = F;
}

Fixed& Fixed :: operator=(const Fixed &F)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (&F != this)
		this->_fixed_point = F.getRawBits();
	return (*this);
}


void	Fixed :: setRawBits(int const raw)
{
	this->_fixed_point = raw;
}


int		Fixed :: getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed_point);
}

Fixed :: ~Fixed ()
{
	std::cout << "Destructor called" << std::endl;
}
