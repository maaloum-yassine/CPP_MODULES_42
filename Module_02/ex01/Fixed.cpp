/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:09:23 by ymaaloum          #+#    #+#             */
/*   Updated: 2023/12/12 03:21:41 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed :: Fixed():_fixed_point(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed :: Fixed(const int nbr)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixed_point = nbr << this->_bit_fractional;
}

Fixed :: Fixed(const float nbr)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixed_point = roundf(nbr * (1 << this->_bit_fractional));
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
		this->_fixed_point = F._fixed_point;
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

float	Fixed :: toFloat( void ) const
{
	return  (float)(this->_fixed_point) / (1 << this->_bit_fractional);
}

int		Fixed :: toInt( void ) const
{
	return (this->_fixed_point >> this->_bit_fractional);
}

Fixed :: ~Fixed ()
{
	std::cout << "Destructor called" << std::endl;
}


std::ostream& operator<<(std::ostream& out, const Fixed &f)
{
	out << f.toFloat();
	return (out);
}
