/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:05:08 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/05/20 05:01:11 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe ::PmergeMe()
{

}

PmergeMe ::PmergeMe(const PmergeMe& _PmergeMe)
{
	*this = _PmergeMe;
}

PmergeMe&  PmergeMe :: operator=(const PmergeMe& _PmergeMe)
{
	this->_list_number_lst = _PmergeMe._list_number_lst;
	this->_list_number_vec = _PmergeMe._list_number_vec;
	this->_input.clear();
	Prog();
	return *this;
}


bool PmergeMe :: checklistNumber()
{
	std :: string		data;
	std::stringstream	ss(this->_input);
	Vc 					vec;
	lst					list;
	long	int			num;
	char 				*endptr;

	while (std::getline(ss, data, ' '))
	{
 		int i = -1;
		while (data[++i])
		{
			if (data[0] == '+')
			{
				 if(std::isdigit(data[1]))
				 	continue;
				else
					return (0);
			}
			if (!std::isdigit(data[i]))
				return 0;
		}
		if (!data.empty())
		{
			num = strtol(data.c_str(), &endptr, 10);
			if (num > INT_MAX)
				return 0;
			vec.push_back(num);
			list.push_back(num);
			this->_list_number_vec.push_back(vec);
			this->_list_number_lst.push_back(list);
			vec.clear();
			list.clear();
		}
	}
	return 1;
}

void	DispayOutputBefore(lstcoFlst &list)
{
	std :: cout << "Before: ";
	for (lstcoFlst::iterator it = list.begin(); it != list.end(); ++it)
	{
		for (lst::iterator inner_it = it->begin(); inner_it != it->end(); ++inner_it)
			std::cout << *inner_it << " ";
	}
	std :: cout << std :: endl;
}

void	DispayOutputAfter(lstcoFlst &list, microscds &MicroS)
{
	std :: cout << "After: ";
	for (lstcoFlst::iterator it = list.begin(); it != list.end(); ++it)
	{
		for (lst::iterator inner_it = it->begin(); inner_it != it->end(); ++inner_it)
			std::cout << *inner_it << " ";
	}
	std :: cout <<"\nTime to process a range of " << list.size() <<  " elements with std::[list] "
	<<  std::fixed << std::setprecision(5)
	<< static_cast<double>(MicroS.count())   << " us" << std :: endl;
}


void	DispayOutputAfter(VcoFvc &list, microscds &MicroS)
{
	std :: cout <<"Time to process a range of " << list.size() <<  " elements with std::[vector] "
	<<  std::fixed << std::setprecision(5)
	<< static_cast<double>(MicroS.count()) << " us" << std :: endl;
}


void	PmergeMe ::Prog()
{
	Clock::time_point start = Clock::now();
	if (!checklistNumber() || this->_list_number_vec.empty())
	{
		if (!this->_list_number_vec.empty())
		{
			 for (VcoFvc::iterator it = this->_list_number_vec.begin(); it != this->_list_number_vec.end(); ++it)
				it->clear();
			 this->_list_number_vec.clear();
		}
		throw std :: string("A program must contain positive integers and not exceed max_int !");
	}
	this->_size_list_vec = this->_list_number_vec.size();
	this->_size_list_lst = this->_list_number_lst.size();
	DispayOutputBefore(this->_list_number_lst);
	Clock::time_point end = Clock::now();
	microscds duration_Parse = std::chrono::duration_cast<microscds>((end - start));
	start = Clock::now();
	Sort_list();
	end = Clock::now();
	microscds duration = std::chrono::duration_cast<microscds>((end - start)) + duration_Parse;
	DispayOutputAfter(this->_list_number_lst, duration) ;
	start = Clock::now();
	Sort_vector();
	end = Clock::now();
	duration = std::chrono::duration_cast<microscds>(end - start) + duration_Parse;
	DispayOutputAfter(this->_list_number_vec, duration) ;
}


PmergeMe ::PmergeMe(const  std :: string & input):_input(input)
{
	try
	{
		Prog();
	}
	catch(const std :: string& ex)
	{
		std :: cerr << ex << std :: endl;
		exit(EXIT_FAILURE);
	}
}
/**************************************Sort_list*****************************************************/

bool	 merge_pair(lst& lst1, lst& lst2)
{
	if (lst1.back() >= lst2.back())
	{
		for (lst::iterator inner_it = lst1.begin(); inner_it != lst1.end(); ++inner_it)
			lst2.push_back(*inner_it);
		return true;
	}
	for (lst::iterator inner_it = lst2.begin(); inner_it != lst2.end(); ++inner_it)
			lst1.push_back(*inner_it);
	return false;
}

void	merge_pair(lstcoFlst &list)
{
	for (lstcoFlst::iterator it = list.begin(); it != list.end(); )
	{

		if (merge_pair(*it, *(std::next(it))))
		{
			it = list.erase(it);
			++it;
		}
		else
			it = list.erase((std::next(it)));
	}
}


bool	compareList(const lst& a, const lst& b)
{
	return a.back() < b.back();
}

void	NewList(lstcoFlst &list, lstcoFlst& mainChain, lstcoFlst& pend)
{
	for (lstcoFlst::iterator it = pend.begin(); it != pend.end(); ++it)
	{
		if (it == pend.begin())
		{
			mainChain.insert(mainChain.begin(), *it);
		}
		else
		{
			lstcoFlst::iterator inner_it = std::lower_bound(mainChain.begin(), mainChain.end(),*it, compareList);
			mainChain.insert(inner_it, *it);
		}
	}
	list.clear();
	list = mainChain;
	mainChain.clear();
	pend.clear();
}

void	ReverseMerge(lstcoFlst &list, lst& remain)
{
	lstcoFlst mainChain;
	lstcoFlst pend;
	size_t sizelist = list.front().size() / 2;

	for (lstcoFlst :: iterator it = list.begin(); it != list.end() ; ++it)
	{
		lst lst;
		for (lst::iterator inner_it = it->begin(); inner_it != std::prev(it->end(), sizelist); ++inner_it)
			lst.push_back(*inner_it);
		pend.push_back(lst);
		lst.clear();
	}
	for (lstcoFlst :: iterator it = list.begin(); it != list.end() ; ++it)
	{
		lst lst;
		lst::iterator inner_it = it->begin();
		std::advance(inner_it, sizelist);
		for ( ; inner_it  != it->end(); ++inner_it)
			lst.push_back(*inner_it);
		mainChain.push_back(lst);
		lst.clear();
	}
	if (!remain.empty())
	{
		pend.push_back(remain);
		remain.clear();
	}
	NewList(list, mainChain, pend);

}

void PmergeMe ::	Sort_list()
{
	lst	reamain;

	if (this->_list_number_lst.size() > 1 && this->_list_number_lst.size() % 2)
	{
		for (lst::iterator inner_it = this->_list_number_lst.back().begin(); inner_it != this->_list_number_lst.back().end(); ++inner_it)
				reamain.push_back(*inner_it);
		this->_list_number_lst.pop_back();
	}
	if (this->_list_number_lst.size() > 1)
	{
		merge_pair(this->_list_number_lst);
		Sort_list();
	}
	else
		return ;
	if (this->_list_number_lst.size() != this->_size_list_vec)
		ReverseMerge(this->_list_number_lst, reamain);
}

/*****************************************Sort_Vector****************************************************************/

bool	 merge_pair(Vc& lst1, Vc& lst2)
{
	if (lst1.back() >= lst2.back())
	{
		for (Vc::iterator inner_it = lst1.begin(); inner_it != lst1.end(); ++inner_it)
			lst2.push_back(*inner_it);
		return true;
	}
	for (Vc::iterator inner_it = lst2.begin(); inner_it != lst2.end(); ++inner_it)
			lst1.push_back(*inner_it);
	return false;
}

void	merge_pair(VcoFvc &_list_number_vec)
{
	for (VcoFvc::iterator it = _list_number_vec.begin(); it != _list_number_vec.end(); )
	{
		if (merge_pair(*it, *(it + 1)))
		{
			it = _list_number_vec.erase(it);
			++it;
		}
		else
			it = _list_number_vec.erase(it + 1);
	}
}


bool	compareVectors(const Vc& a, const Vc& b)
{
		return a.back() < b.back();
}


void	NewList(VcoFvc &_list_number_vec, VcoFvc& mainChain, VcoFvc& pend)
{
	for (VcoFvc::iterator it = pend.begin(); it != pend.end(); ++it)
	{
		if (it == pend.begin())
			mainChain.insert(mainChain.begin() ,*it);
		else
		{
			VcoFvc::iterator inner_it = std::lower_bound(mainChain.begin(), mainChain.end(), *it, compareVectors);
			mainChain.insert(inner_it, *it);
		}
	}
	_list_number_vec.clear();
	_list_number_vec = mainChain;
}


void	ReverseMerge(VcoFvc &_list_number_vec, Vc& remain)
{
	VcoFvc mainChain;
	VcoFvc pend;
	size_t sizelist = _list_number_vec[0].size() / 2;

	for (VcoFvc :: iterator it = _list_number_vec.begin(); it != _list_number_vec.end() ; ++it)
	{
		Vc vec;
		for (Vc::iterator inner_it = it->begin(); inner_it != it->end() - sizelist ; ++inner_it)
			vec.push_back(*inner_it);
		pend.push_back(vec);
		vec.clear();
	}
	for (VcoFvc :: iterator it = _list_number_vec.begin(); it != _list_number_vec.end() ; ++it)
	{
		Vc vec;
		for (Vc::iterator inner_it = it->begin()+ sizelist ; inner_it  != it->end(); ++inner_it)
			vec.push_back(*inner_it);
		mainChain.push_back(vec);
		vec.clear();
	}
	if (!remain.empty())
		pend.push_back(remain);
	NewList(_list_number_vec, mainChain, pend);

}

void PmergeMe ::	Sort_vector()
{
	Vc	reamain;
	if (this->_list_number_vec.size() > 1 && this->_list_number_vec.size() % 2)
	{
		for (Vc::iterator inner_it =  _list_number_vec.back().begin(); inner_it != _list_number_vec.back().end(); ++inner_it)
			reamain.push_back(*inner_it);
		this->_list_number_vec.pop_back();
	}
	if (this->_list_number_vec.size() > 1)
	{
		merge_pair(this->_list_number_vec);
		Sort_vector();
	}
	else
		return ;
	if (this->_list_number_vec.size() != this->_size_list_vec)
		ReverseMerge(this->_list_number_vec, reamain);

}
/***********************************************************************************************************************/
PmergeMe ::~PmergeMe()
{

}
