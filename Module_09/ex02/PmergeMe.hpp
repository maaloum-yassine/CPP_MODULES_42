/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:03:37 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/03/22 01:07:24 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PMERGEME_HPP
# define _PMERGEME_HPP

#include <iostream>
#include <sstream>
#include <vector>
#include <list>
#include <iomanip>
#include <chrono>


typedef std::vector	<std::vector<unsigned int>>						VcoFvc;
typedef std::vector	<unsigned int>								Vc;
typedef std::list	<std::list<unsigned int>>						lstcoFlst;
typedef std::list	<unsigned int> 								lst;
typedef std::chrono::high_resolution_clock 							Clock;
typedef std::chrono::microseconds 								microscds;

class PmergeMe
{
		VcoFvc 									_list_number_vec;
		lstcoFlst								_list_number_lst;
		std :: string								_input;
		size_t									_size_list_vec;
		size_t									_size_list_lst;

		PmergeMe();
		void	Sort_vector();
		void	Prog();
		void	Sort_list();
		bool	checklistNumber();
	public :
		PmergeMe(const  std :: string &);
		PmergeMe(const PmergeMe&);
		PmergeMe& operator=(const PmergeMe&);
		~PmergeMe();
};

#endif
