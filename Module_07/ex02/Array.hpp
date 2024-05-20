/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 04:58:53 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/02/11 07:11:42 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	T				*rawArray;
	unsigned int	size;
	public :
	Array();
	Array(unsigned int);
	Array(const Array& );
	Array& operator=(const Array&);
	unsigned int getSize()const;
	T& operator[](unsigned int )const;
	~Array();

};

template<typename T>
std::ostream& operator<<(std::ostream&,const Array<T>&);

#include "Array.tpp"

#endif
