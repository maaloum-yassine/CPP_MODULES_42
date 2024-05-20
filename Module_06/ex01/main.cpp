/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 23:15:28 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/01/30 05:07:17 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main ()
{

	Data dt ;
	dt.number = 1337;

	std::cout << "Address DATA ==>" << &dt << std::endl;

	//Sérialisation de l'adresse mémoire de l'objet
	std::cout << Serializer::serialize(&dt) << std::endl;
	// Désérialisation de l'adresse mémoire

	std::cout << Serializer::deserialize(Serializer::serialize(&dt)) << std::endl;
	// Utilisation de l'objet désérialisé

	std::cout << Serializer::deserialize(Serializer::serialize(&dt))->number << std::endl;

	return (0);
}
