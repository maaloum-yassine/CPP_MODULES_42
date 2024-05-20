/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 06:09:44 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/01/01 07:08:20 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AMateria.hpp"


AMateria ::AMateria()
{

}

AMateria :: AMateria(std::string const & type):_type(type)
{

}


AMateria :: AMateria(const AMateria& _cpyAMateria)
{
	*this = _cpyAMateria;
}

AMateria& AMateria :: operator= (const AMateria &_cpyAMateria)
{
	if (this != &_cpyAMateria)
		this->_type = _cpyAMateria._type;
	return *this;
}


std::string const & AMateria :: getType() const
{
	return(this->_type);
}


void	AMateria :: use(ICharacter& target)
{
	std :: cout << "ABSTRACT CLASS AMateria Call Function USE Type =>" <<  target.getName() << std :: endl;
}

AMateria ::~AMateria()
{

}
