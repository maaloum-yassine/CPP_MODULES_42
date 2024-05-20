/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 18:38:00 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/02/28 21:16:15 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"


void	TestSubject()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	MutantStack<int> s(mstack);
}

void	ListStack()
{
	std::list<int>lst;
	lst.push_front(5);
	lst.push_front(17);
	std::cout << lst.front() << std::endl;
	lst.pop_front();
	std::cout << lst.size() << std::endl;
	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);
	//[...]
	lst.push_back(0);
	std::list<int> ::iterator it = lst.begin();
	std::list<int> ::iterator ite = lst.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::list<int> lstcpy(lst);
}

void	Stack()
{
	MutantStack<int , std::vector<int> >Stack;
	srand(time(0));
	for (int i = 0 ; i < 10; i++)
		Stack.push(rand());
	std:: cout << "Display elment STACK " << std :: endl;
	for (MutantStack<int , std::vector<int> > ::iterator it = Stack.begin(); it !=  Stack.end() ;it++)
		std :: cout << *it << std :: endl;
	std :: cout << "/******************************************************/" << std :: endl;
	MutantStack<int , std::vector<int> > cpy_Stack(Stack);
	std:: cout << "Display elment CPY STACK " << std :: endl;
	for (MutantStack<int , std::vector<int> > ::iterator it = Stack.begin(); it !=  Stack.end() ;it++)
		std :: cout << *it << std :: endl;
	/*******************************************************************************************/
	while (Stack.size() > 0)
	{
		Stack.pop();
		cpy_Stack.pop();
	}
}

int main( void )
{
	std :: cout << "**********************************TestSubject 1**********************************" << std :: endl;
	TestSubject();
	std :: cout << "**********************************TestSubject With list**********************************" << std :: endl;
	ListStack();
	std :: cout << "**************************************TestOrtodox**********************************" << std :: endl;
	Stack();
	std :: cout << "****************************************************************************" << std :: endl;
	return 0;
}
