/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:53:30 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/02/28 21:13:32 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span:: Span()
{
	this->_Size_vec = 0;
}

Span:: Span(unsigned int N)
{
	if (static_cast<int>(N) < 0)
		throw  Span :: ContainersExceptionSize();
	this->_Size_vec = N;
}

Span:: Span(const Span& Cpy_Span)
{
	*this = Cpy_Span;
}
Span&  Span::operator=(const Span& Obj_Span)
{
	if (this !=  &Obj_Span)
	{
		this->vec = Obj_Span.vec;
		this->_Size_vec = Obj_Span.getN();
	}
	return *this;
}

const std::vector<int>&  Span:: getVec()const
{
	return (this->vec);
}

unsigned int	Span:: getN()const
{
	return (this->_Size_vec);
}
void	Span:: addNumber(int N)
{
	if (static_cast<int>(--this->_Size_vec) < 0)
		throw std ::out_of_range("array index out of the range!! [^_^]");
	this->vec.push_back(N);

}

const char* Span::ContainersExceptionSize  ::  what()const throw()
{
	return "The container size must be positive!! [^_^]";
}

const char* Span::ContainersExceptionElement  ::  what()const throw()
{
	return "The container must take at least two elements to calculate the distance!! [^_^]";
}


unsigned int	Span:: longestSpan()
{
	if (this->vec.size() == 0 || this->vec.size() == 1)
		throw Span::ContainersExceptionElement();
	return (*(std::max_element(this->vec.begin() , this->vec.end())) - *(std::min_element(this->vec.begin(), this->vec.end())));
}



unsigned	int Span:: shortestSpan()
{
	unsigned int min_distance = 0;
	if (this->vec.size() == 0 || this->vec.size() == 1)
		throw Span::ContainersExceptionElement();
	std::sort (this->vec.begin() + this->_Size_vec, this->vec.end());
	min_distance = *(this->vec.begin() + 1) - *(this->vec.begin());
	for (std::vector<int>::iterator it = this->vec.begin(); it != this->vec.end(); ++it)
	{
		if (static_cast<unsigned int>(*(it + 1) - *it) <= min_distance)
			min_distance = static_cast<unsigned int>(*(it + 1) - *it);
	}
	return (min_distance);
}

void	Span:: AddRangeNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	int distance = std::distance(begin, end);
	if (!distance  && static_cast<int>(--this->_Size_vec) >= 0)
		this->vec.push_back(*begin);
	else if (distance < 0 || static_cast<int>(this->_Size_vec) - distance < 0)
			throw std ::out_of_range("array index out of the range!! [^_^]");
	this->vec.insert(this->vec.end(), begin, end);
	this->_Size_vec -= distance;
}


void 	Span::		AddRangeNumber(std::list<int>::iterator begin, std::list<int>::iterator end)
{
	int distance = std::distance(begin, end);
	if (!distance  && static_cast<int>(--this->_Size_vec) >= 0)
		this->vec.push_back(*begin);
	else if (distance < 0 || static_cast<int>(this->_Size_vec) - distance < 0)
			throw std ::out_of_range("array index out of the range!! [^_^]");
	this->vec.insert(this->vec.end(), begin, end);
	this->_Size_vec -= distance;
}


void 	Span::		AddRangeNumber(std::deque<int>::iterator begin, std::deque<int>::iterator end)
{
		int distance = std::distance(begin, end);
	if (!distance  && static_cast<int>(--this->_Size_vec) >= 0)
		this->vec.push_back(*begin);
	else if (distance < 0 || static_cast<int>(this->_Size_vec) - distance < 0)
			throw std ::out_of_range("array index out of the range!! [^_^]");
	this->vec.insert(this->vec.end(), begin, end);
	this->_Size_vec -= distance;
}



Span:: ~Span()
{}
