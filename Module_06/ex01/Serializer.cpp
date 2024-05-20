/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 23:01:57 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/01/29 04:59:34 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"


Serializer :: Serializer()
{

}

Serializer :: Serializer(const Serializer& cpy_Serializer)
{
	(void)cpy_Serializer;
}


Serializer& Serializer :: operator=(const Serializer& cpy_Serializer)
{
	(void)cpy_Serializer;
	return *this;
}

uintptr_t	Serializer :: serialize(Data* ptr)
{
	return ((uintptr_t)reinterpret_cast<uintptr_t>(ptr));
}


Data*	Serializer ::	deserialize(uintptr_t raw)
{
	Data* ptr_dt = reinterpret_cast<Data *>(raw);
	return (ptr_dt);
}

Serializer :: ~Serializer()
{

}
