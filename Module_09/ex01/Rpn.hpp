/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rpn.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 07:10:00 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/03/22 01:42:57 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _RPN_HPP
# define _RPN_HPP

#include <iostream>
#include <sstream>
#include <stack>

class  Rpn
{
	std ::	stack<float>_stack;
	std	:: 	string _argument;
	void	CalcWithStack(char &opaerator);
	Rpn();
	void	Reverse_Polish_Notation();
	public :
		Rpn(const Rpn&);
		Rpn& operator=(const Rpn&);
		Rpn(const std :: string&);
		~Rpn();
};


#endif
