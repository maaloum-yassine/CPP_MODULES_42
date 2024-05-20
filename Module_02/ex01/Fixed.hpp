/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:48:21 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/05/20 01:47:46 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_HPP
# define _FIXED_HPP

#include <iostream>
#include <cmath>
class Fixed
{
	private :
		static const  int 	_bit_fractional = 8;
		int					_fixed_point;
	public :
		Fixed();
		Fixed(const int);
		Fixed(const float);
		Fixed(const Fixed &F);
		Fixed& operator=(const Fixed &F);
		void	setRawBits( int const raw );
		int		getRawBits( void ) const;
		float	toFloat( void ) const;
		int		toInt( void ) const;
		~Fixed();
};

std::ostream& operator<<(std::ostream& out, const Fixed &f);


#endif
