/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 16:28:04 by ymaaloum          #+#    #+#             */
/*   Updated: 2023/12/18 06:07:08 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main(void)
{
	std :: cout << "a(0, 0), b(0, 5), c(5, 0), point(0, 10): "
	<< bsp(Point(0, 0), Point(0, 5), Point(5, 0), Point(0, 10))
	<< "\na(0, 0), b(0, 5), c(5, 0), point(0, 5): "
	<< bsp(Point(0, 0), Point(0, 5), Point(5, 0), Point(0, 5)) << std::endl
	<< "a(0, 0), b(0, 5), c(5, 0), point(1, 2.5): "
	<< bsp(Point(0, 0), Point(0, 5), Point(5, 0), Point(1, 2.5)) << std::endl
	<< "a(0, 0), b(0, 5), c(5, 0), point(2.5, 2.5): "
	<< bsp(Point(0, 0), Point(0, 5), Point(5, 0), Point(2.5, 2.5)) << std::endl
	<< "a(0, 0), b(0, 5), c(5, 0), point(2.0, 2.0): "
	<< bsp(Point(0, 0), Point(0, 5), Point(5, 0), Point(2.0f, 2.0f)) << std::endl
	<< "a(0, 0), b(0, 5), c(5, 0), point(10, 0.01): "
	<< bsp(Point(0, 0), Point(0, 5), Point(5, 0), Point(10, 0.01f)) << std::endl
	<< "a(0, 0), b(0, 5), c(5, 0), point(1 ,1): "
	<< bsp(Point(0, 0), Point(0, 5), Point(5, 0), Point(1 ,1)) << std::endl
	<< "a(0, 0), b(0, 5), c(5, 0), point(999999 ,9999999): "
	<< bsp(Point(0, 0), Point(0, 5), Point(5, 0), Point(999999 ,999999)) << std::endl;

	return (0);
}
