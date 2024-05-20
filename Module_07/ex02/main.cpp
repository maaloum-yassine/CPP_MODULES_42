/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 04:57:59 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/02/12 05:32:37 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

/*class Tst
{
	int _n;
	public :
		Tst():_n(9){};
		int get()const{return this->_n;}
		~Tst(){};
};

std::ostream & operator<<( std::ostream & o, Tst const & tst )
{
	o << tst.get();
	return o;
}*/

int main ()
{
	try
	{
		/******************************************************/
		/*Array<Tst>arrayTst(5);
		std :: cout << arrayTst << std :: endl;*/
		/******************************************************/
		/**********************************************************************/
		Array<std:: string> *array_string = new Array<std:: string>(3);
		array_string[0][0] = "1337";
		array_string[0][1] = "1337";
		array_string[0][2] = "1337";
		Array<int> array_int(2);
		array_int[0] = 13;
		array_int[1] = 37;
		std :: cout << array_int << std :: endl;
		std :: cout << *array_string << std :: endl;
		Array<std:: string> *array_stringcpy = new Array<std:: string>(3);
		*array_stringcpy = *array_string;
		std :: cout << *array_stringcpy << std :: endl;
		Array<int> array_intcpy(array_int);
		std :: cout << array_intcpy << std :: endl;
		delete  array_string;
		delete  array_stringcpy;
		// /**********************************************************************/
	}
	catch (std :: exception &ex)
	{
		std :: cerr << ex.what() << std :: endl;
	}
	return (0);
}


