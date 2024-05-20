/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Manage_files.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 06:15:41 by ymaaloum          #+#    #+#             */
/*   Updated: 2023/12/15 04:27:33 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MANAGE_FILES_HPP
#define _MANAGE_FILES_HPP

#include <iostream>
#include <fstream>
#include <string>

typedef struct t_files
{
	std ::ifstream	file;
	std ::ofstream	file_replace;
	std :: string	name_file1;
	std :: string	s1;
	std :: string	s2;
	size_t		 	len_s1;
	bool			check_empty;
}s_files;

int	find_and_replace(t_files	*s_dt);
int	print_err(std :: string err);

#endif
