/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 06:37:13 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/02/11 07:11:51 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

template<typename T>
Array<T>::Array():rawArray (new T[0]),size(0)
{
}

template<typename T>
Array<T>::Array(unsigned int n):rawArray (new T[n]),size(n)
{
	// Initialize element of the array to a default-constructed value
	for (unsigned int i = 0; i < n; i++)
		rawArray[i] = T();
}

template<typename T>
Array<T>::Array(const Array& cpyArray):rawArray(NULL)
{
	*this = cpyArray;
}

template<typename T>
Array<T>& Array<T>::operator=(const Array& cpyArray)
{
	if (this != &cpyArray)
	{
		if (this->rawArray)
			delete [] this->rawArray;
		this->size = cpyArray.getSize();
		this->rawArray = new T[cpyArray.getSize()];
		for (unsigned int i = 0 ; i < cpyArray.getSize(); i++)
			this->rawArray[i] = cpyArray.rawArray[i];
	}
	return *this;
}

template<typename T>
T& Array<T>::operator[](unsigned int index)const
{
	if (index >= size)
		throw std ::out_of_range("array index out of the range [^_^]");
	return (this->rawArray[index]);
}

template<typename T>
unsigned int Array<T>:: getSize()const
{
	return (this->size);
}


template<typename T>
Array<T>::~Array()
{
	delete [] rawArray;
}


template<typename T>
std::ostream& operator<<(std::ostream& os,const Array<T>& array)
{
	os << "[ ";
	for (size_t i = 0; i < array.getSize(); ++i)
	{
		os << array[i] << " ";
	}
	os << "]";
	return os;
}

#endif
