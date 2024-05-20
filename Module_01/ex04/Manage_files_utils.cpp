/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Manage_files_utils.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:05:50 by ymaaloum          #+#    #+#             */
/*   Updated: 2023/12/15 04:48:14 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Manage_files.hpp"

int	print_err(std :: string err)
{
	std :: cout << err << std ::endl;
	return (1);
}

static	int	close_file(t_files	*s_dt)
{
	if (!s_dt->check_empty)
	{
		s_dt->file.close();
		s_dt->file_replace.close();
		return (print_err("Erreur : file is empty"));
	}
	s_dt->file.close();
	s_dt->file_replace.close();
	return (0);
}

int	find_and_replace(t_files	*s_dt)
{
	std :: string line;
	std :: string res;
	std :: string str;
	size_t find_pos;
	size_t start_pos;

	s_dt->check_empty = false;
	s_dt->len_s1 =s_dt->s1.length();
	while(std ::getline(s_dt->file, line))
	{
		s_dt->check_empty = true;
		start_pos = 0;
		while ((find_pos = line.find(s_dt->s1, start_pos)) != std::string::npos)
		{
			str = line.substr(start_pos, find_pos - start_pos);
			res += str;
			res += s_dt->s2;
			start_pos = s_dt->len_s1 + find_pos;
			s_dt->file_replace << res;
			res.clear();
		}
		if (start_pos != line.length())
		{
			res = line.substr(start_pos, line.length() - start_pos);
			s_dt->file_replace << res;
			res.clear();
		}
		s_dt->file_replace << "\n";
	}
	return (close_file(s_dt));
}
