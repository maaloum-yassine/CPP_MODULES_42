/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:52:13 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/02/28 20:10:12 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SPAN_HPP
# define _SPAN_HPP

#include <iostream>
#include <deque>
#include <list>
#include <vector>

class Span
{
		std::vector<int>vec;
		unsigned int		_Size_vec;
	public :
		Span();
		Span(unsigned int);
		Span(const Span&);
		Span&	operator=(const Span&);
		const std::vector<int>& getVec()const;
		unsigned int	getN()const;
		//**********************************//
		class  ContainersExceptionSize: public std:: exception
		{
			const char* what() const throw();
		};
		//**********************************//
		class  ContainersExceptionElement: public std:: exception
		{
			const char* what() const throw();
		};
		//**********************************//
		unsigned int	longestSpan();
		unsigned int	shortestSpan();
		void			addNumber(int);
		void 			AddRangeNumber(std::vector<int>::iterator, std::vector<int>::iterator);
		void 			AddRangeNumber(std::list<int>::iterator, std::list<int>::iterator);
		void 			AddRangeNumber(std::deque<int>::iterator, std::deque<int>::iterator);
		~Span();
};

#endif
