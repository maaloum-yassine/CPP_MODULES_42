/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rpn.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 02:43:00 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/03/22 01:47:17 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Rpn.hpp"

Rpn ::Rpn()
{}

Rpn ::Rpn(const std :: string& _arg):_argument(_arg)
{
	Reverse_Polish_Notation();
}



Rpn :: Rpn(const Rpn& _Rpn)
{
	*this = _Rpn;
}

Rpn&  Rpn :: operator=(const Rpn& _Rpn)
{

	this->_argument = _Rpn._argument;
	Reverse_Polish_Notation();
	return *this;
}



bool CheckOperation(char &c)
{
	if (c == '-' || c == '+' || c == '/' || c == '*' )
		return true;
	return false;
}


void		Rpn :: CalcWithStack(char &opaerator)
{
	float number1;
	float number2;

	number1 = this->_stack.top();
	this->_stack.pop();
	number2 = this->_stack.top();
	this->_stack.pop();
	switch(opaerator)
	{
		case '+':
					this->_stack.push(number1 + number2);	break;
		case '-' :
					this->_stack.push(-number1 + number2);	break;
		case '/' :
					this->_stack.push(number2 / number1) ;	break;
		case '*' :
					this->_stack.push(number2 * number1);	break;
	}
}

void Rpn ::	Reverse_Polish_Notation()
{
	try
	{
		std :: string data;

		std::stringstream ss(this->_argument);
		while (std::getline(ss, data, ' '))
		{
			if (!data.empty())
			{
				if (data.length() > 1 || (!std::isdigit(data[0]) && !CheckOperation(data[0])))
					throw std :: string ("ERREUR");
				else
				{
					if (this->_stack.empty() && CheckOperation(data[0]))
						throw std :: string ("ERREUR");
					else if (std::isdigit(data[0]))
						this->_stack.push(data[0] - 48);
					else if (this->_stack.size() > 1 && CheckOperation(data[0]) )
						CalcWithStack(data[0]);
					else
						throw std :: string ("ERREUR");
				}
			}
		}
		if (this->_stack.size() != 1)
			throw std :: string ("ERREUR");
		std :: cout << this->_stack.top() << std :: endl;
	}
	catch(const std :: string& ex)
	{
		std :: cerr << ex << std :: endl;
	}
}

Rpn ::~Rpn()
{
	while (!this->_stack.empty())
		this->_stack.pop();
}
