/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 05:40:15 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/05/20 01:49:20 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point :: Point():x(0),y(0)
{
	return ;
}


Point :: Point(const float _x, const float _y):x(_x),y(_y)
{
	return ;
}

Point  :: Point(const Point&  _Point)
{
	*this = _Point;
}

Point&  Point :: operator=(const Point& _Point)
{
	if ( this != &_Point )
	{
		const_cast< Fixed& >(this->x) = _Point.get_x();
		const_cast< Fixed& >(this->y) = _Point.get_y();
	}
	return (*this);
}


Fixed Point :: get_x()const
{
	return(this->x);
}

Fixed Point :: get_y()const
{
	return(this->y);
}


bool	Point :: operator==(const Point& _Point)const
{
	if ((this->get_x() == _Point.get_x())
		&& ((this->get_y() == _Point.get_y())))
	return (true);
	return (false);
}

Point :: ~Point()
{
	return ;
}



static Fixed 	Distance(const Point&  a, const Point&  b)
{
	return Fixed(float(sqrt (pow((a.get_x().toFloat() - b.get_x().toFloat()), 2) + pow((a.get_y().toFloat() - b.get_y().toFloat()), 2) )) );
}

static Fixed Heron_area_triangle(Fixed& a, Fixed& b, Fixed& c)
{
	//Heron's formula
	return (Fixed(float( 0.25 * (sqrt((4 * pow(a.toFloat() ,2) * pow(b.toFloat(), 2)) - (pow(((pow(a.toFloat(), 2) + pow(b.toFloat(), 2) - pow(c.toFloat(), 2)) ) , 2)))))));
}

static bool check_point(Fixed	_distance[])
{
	Fixed tolerance(0.1f);
	Fixed area_triangle[4]	= { Heron_area_triangle(_distance[0], _distance[1], _distance[2])
							, Heron_area_triangle(_distance[0], _distance[3] ,_distance[4])
							, Heron_area_triangle(_distance[1], _distance[3] ,_distance[5])
							, Heron_area_triangle(_distance[2], _distance[4] ,_distance[5])
							};
	if (!(area_triangle[1].toInt() == 0 || area_triangle[2].toInt() == 0 || area_triangle[3].toInt() == 0))
	{
		if  (fabs((area_triangle[0].toFloat() - (area_triangle[1].toFloat() + area_triangle[2].toFloat() + area_triangle[3].toFloat()))) < tolerance.toFloat() )
			return (true);
	}
	return (false);
}

static bool	bsp_2(const Point&  a, const Point&  b, const Point&  c, const Point&  point)
{
	Fixed	_distance[6];

	_distance[0] 	= 	Distance(a, b);
	_distance[1] 	= 	Distance(a, c);
	_distance[2] 	= 	Distance(b, c);
	_distance[3] 	= 	Distance(point ,a);
	_distance[4] 	= 	Distance(point ,b);
	_distance[5] 	= 	Distance(point ,c);
	return (check_point(_distance));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	if ((a == b ||  a == c || b == c || point == a || point == b || point == c))
		return (false);
	return (bsp_2(a, b , c , point));
}
