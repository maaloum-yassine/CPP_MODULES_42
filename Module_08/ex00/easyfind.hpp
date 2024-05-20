/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 12:08:00 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/02/26 21:51:06 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _EASYFIND_HPP
# define _EASYFIND_HPP

#include <iostream>

template<typename T>
void	easyfind(T container, int element)
{
	typename T::iterator it = std::find(container.begin(), container.end(), element);
	if (it == container.end())
		throw std::string("Occurrence was not found!❌ [^_^]");
	std :: cout << "Occurrence is found ✅ [^_^] " << std :: endl;
}

#endif
