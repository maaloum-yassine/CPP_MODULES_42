/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 06:34:57 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/05/20 02:24:46 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CURE_HPP
#define _CURE_HPP

#include "Ice.hpp"

class Cure : public AMateria
{
	public :
		Cure();
		Cure(std::string const & type);
		Cure(const Cure&);
		Cure& operator= (const Cure&);
		Cure* clone() const;
		void use(ICharacter& target);
		~Cure();

};

#endif
