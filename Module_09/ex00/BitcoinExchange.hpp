/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:41:37 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/03/14 21:31:54 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BITCOINEXCHANGE_HPP
# define _BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <map>
#define MAX_FLOAT std::numeric_limits<float>::max()

class BitcoinExchange
{
	std:: map<std::string, double> 			list_data;
	std ::ifstream 					_Dbase;
	std ::ifstream 					_File;
	std :: string					_Path_file;
	char						_openfile;
	BitcoinExchange();
	BitcoinExchange(const std::string& Path_file) ;
	BitcoinExchange(const BitcoinExchange&);
	BitcoinExchange& operator=(const BitcoinExchange&);
	void	ReadDataBase(std ::ifstream&);
	void	ReadFile(std ::ifstream&);
	bool	FillMap();
	~BitcoinExchange();
	public :
		static void	btc(const std::string&);
};

#endif
