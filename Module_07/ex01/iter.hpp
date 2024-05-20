/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 23:25:02 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/02/12 05:19:43 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ITER_HPP
#define _ITER_HPP

#include <iostream>

template<typename T, typename A>
void	iter(T* array,  size_t lenght, A f)
{
	if (!array || !f)
		return;
	for(size_t	i = 0; i < lenght; i++)
		f(array[i]);
}

template< typename T >
void print(T& x )
{
	std::cout << x << std::endl;
}

#endif
