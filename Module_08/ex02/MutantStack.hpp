/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 18:38:13 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/02/28 21:16:18 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>
#include <list>
#include <vector>

template <typename T, typename S = std::deque<T> >
class MutantStack: public std::stack<T, S>
{
	public:
		MutantStack() : std::stack<T, S>() {};
		MutantStack(MutantStack const & cpy_MutantStack) : std::stack<T, S >(cpy_MutantStack)
		{
			*this = cpy_MutantStack;
		};
		MutantStack		&operator=(MutantStack const &cpy_MutantStack) {
			std::stack<T, S >::operator=(cpy_MutantStack);
			return *this;
		}
		typedef typename std::stack<T, S >::container_type::iterator iterator;
		typedef typename std::stack<T, S >::container_type::const_iterator const_iterator;
		typedef typename std::stack<T, S >::container_type::reverse_iterator reverse_iterator;

		iterator	begin() {
			return this->c.begin();
		}
		iterator	end() {
			return this->c.end();
		}

		const_iterator	cbegin() {
			return this->c.cbegin();
		}
		const_iterator	cend() {
			return this->c.cend();
		}

		reverse_iterator	rbegin() {
			return this->c.rbegin();
		}
		reverse_iterator	rend() {
			return this->c.rend();
		}

		~MutantStack() {};
};


#endif
