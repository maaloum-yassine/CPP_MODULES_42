/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 05:18:27 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/05/20 01:49:15 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _POINT_HPP
#define _POINT_HPP

#include "Fixed.hpp"

class Point
{
	public :
		Fixed const x;
		Fixed const y;
	public :
		Point();
		Point(const float, const float);
		Point(const Point&);
		Fixed get_x()const;
		Fixed get_y()const;
		Point& 	operator=(const Point&);
		bool	operator==(const Point&)const;
		~Point();
};

bool	bsp( Point const a, Point const b, Point const c, Point const point);


#endif
