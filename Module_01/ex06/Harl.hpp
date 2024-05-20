/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:29:23 by ymaaloum          #+#    #+#             */
/*   Updated: 2023/11/29 13:29:24 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HARL_HPP
#define _HARL_HPP

#include <iostream>

class Harl
{
	private :
		void debug( void );
		void info( void );
 		void warning( void );
 		void error( void );
	public :
		Harl();
		~Harl();
		void complain( std::string level );
};


#endif

