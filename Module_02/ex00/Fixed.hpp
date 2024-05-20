/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:48:21 by ymaaloum          #+#    #+#             */
/*   Updated: 2023/12/15 09:26:29 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_HPP
# define _FIXED_HPP

#include <iostream>
class Fixed
{
	private :
		int	_fixed_point;
		static const  int _bit_fractional = 8;
	public :
		Fixed();
		Fixed(const Fixed &F);
		Fixed& operator=(const Fixed &F);
		void	setRawBits( int const raw );
		int		getRawBits( void ) const;
		~Fixed();
};

#endif
