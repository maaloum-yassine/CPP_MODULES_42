/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 22:36:45 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/02/12 04:56:25 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WHATEVER_HPP
#define _WHATEVER_HPP

#include <iostream>

template<typename T>
T min(T a, T b)
{
	return a > b ? b : a;
}


template<typename T>
T max(T a, T b)
{
	return a > b ? a : b;
}


template<typename T>
void	swap(T& a,T& b)
{
	T	tmp;

	tmp	=	b;
	b	=	a;
	a	=	tmp;
}

#endif
