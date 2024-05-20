/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:48:21 by ymaaloum          #+#    #+#             */
/*   Updated: 2023/12/12 05:09:31 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_HPP
# define _FIXED_HPP

#include <iostream>
#include <cmath>
class Fixed
{
	private :
		int	_fixed_point;
		static const  int _bit_fractional = 8;
	public :
		Fixed();
		Fixed(const int);
		Fixed(const float);
		Fixed(const Fixed &F);
		Fixed&	operator=(const Fixed &F);
		void	setRawBits( int const raw );
		int		getRawBits( void ) const;
		float	toFloat( void ) const;
		int		toInt( void ) const;
		bool	operator>(const Fixed&)const;
		bool	operator<(const Fixed&)const;
		bool	operator>=(const Fixed&)const;
		bool	operator<=(const Fixed&)const;
		bool	operator==(const Fixed&)const;
		bool	operator!=(const Fixed&)const;
		Fixed	operator+(const Fixed&)const;
		Fixed	operator-(const Fixed&)const;
		Fixed	operator*(const Fixed&)const;
		Fixed	operator/(const Fixed&)const;
		Fixed&	operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);
		static	Fixed& min (Fixed&, Fixed&);
		static	Fixed& max (Fixed&, Fixed&);
		static	const Fixed& min (const Fixed&,const Fixed&);
		static	const Fixed& max (const Fixed&,const Fixed&);
		~Fixed();
};

std::ostream& operator<<(std::ostream& out, const Fixed &f);


#endif
