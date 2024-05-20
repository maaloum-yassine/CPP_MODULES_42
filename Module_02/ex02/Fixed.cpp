/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:09:23 by ymaaloum          #+#    #+#             */
/*   Updated: 2023/12/18 05:34:32 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed :: Fixed():_fixed_point(0)
{
}

Fixed :: Fixed(const int nbr)
{
	this->_fixed_point = nbr << this->_bit_fractional;
}

Fixed :: Fixed(const float nbr)
{
	this->_fixed_point = roundf(nbr * (1 << this->_bit_fractional));
}

Fixed ::	Fixed(const Fixed& F)
{
	*this = F;
}

Fixed& Fixed :: operator=(const Fixed &F)
{
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

bool	Fixed :: operator<(const Fixed& _Fixed)const
{
	return (this->_fixed_point < _Fixed._fixed_point);
}
bool	Fixed :: operator>(const Fixed& _Fixed)const
{
	return (this->_fixed_point > _Fixed._fixed_point);
}

bool	Fixed :: operator>=(const Fixed& _Fixed)const
{
	return (this->_fixed_point >= _Fixed._fixed_point);
}

bool	Fixed :: operator<=(const Fixed& _Fixed)const
{
	return (this->_fixed_point <= _Fixed._fixed_point);
}

bool	Fixed :: operator==(const Fixed& _Fixed)const
{
	return this->_fixed_point == _Fixed._fixed_point;
}

bool	Fixed :: operator!=(const Fixed& _Fixed)const
{
	return this->_fixed_point != _Fixed._fixed_point;
}

Fixed	Fixed :: operator+(const Fixed& _Fixed)const
{
	return (Fixed(_Fixed.toFloat() + this->toFloat()));
}

Fixed	Fixed :: operator-(const Fixed& _Fixed)const
{
	return (Fixed(this->toFloat() - _Fixed.toFloat()));
}

Fixed	Fixed :: operator*(const Fixed& _Fixed)const
{
	return (Fixed(_Fixed.toFloat() * this->toFloat()));
}

Fixed	Fixed :: operator/(const Fixed& _Fixed)const
{
	return (Fixed(this->toFloat() / _Fixed.toFloat() ));
}

Fixed&  Fixed ::	operator++()
{
	this->_fixed_point++;
	return *this;
}

Fixed 	Fixed ::	operator++(int)
{
	Fixed tmp = *this;
	this->_fixed_point++;
	return tmp;
}


Fixed&  Fixed ::	operator--()
{
	this->_fixed_point--;
	return *this;
}


Fixed  Fixed ::	operator--(int)
{
	Fixed tmp = *this;
	this->_fixed_point--;
	return tmp;
}

Fixed& Fixed :: min (Fixed& _Fixed1,Fixed& _Fixed2)
{
	if (_Fixed1 >= _Fixed2)
		return _Fixed2;
	return _Fixed1;
}

Fixed& Fixed :: max (Fixed& _Fixed1,Fixed& _Fixed2)
{
	if (_Fixed1 >= _Fixed2)
		return _Fixed1;
	return _Fixed2;
}

const Fixed& Fixed :: min (const Fixed& _Fixed1,const Fixed& _Fixed2)
{
	if (_Fixed1 >= _Fixed2)
		return _Fixed2;
	return _Fixed1;
}

const Fixed& Fixed :: max (const Fixed& _Fixed1,const Fixed& _Fixed2)
{
	if (_Fixed1 >= _Fixed2)
		return _Fixed1;
	return _Fixed2;
}


std::ostream& operator<<(std::ostream& out, const Fixed &f)
{
	out << f.toFloat();
	return (out);
}

Fixed :: ~Fixed ()
{
}
