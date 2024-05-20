/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 23:43:20 by ymaaloum          #+#    #+#             */
/*   Updated: 2023/12/29 05:48:44 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BRAIN_HPP
# define _BRAIN_HPP

#ifndef IOSTERAM
	#include <iostream>
#endif

class Brain
{
	private	:
		std :: string _ideas[100];
	public	:
		Brain();
		Brain(const std :: string(&) [100]);
		Brain(const Brain&);
		Brain& 				operator=(const Brain&);
		void				set_elment_ideas(const std :: string& , int);
		std :: string		get_elment_ideas(int) const;
		void				set_all_ideas(std :: string (&)[100]);
		const std::string (&get_all_Ideas() const)[100];
		~Brain();
};


#endif
