/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 00:36:59 by ymaaloum          #+#    #+#             */
/*   Updated: 2023/12/15 04:45:54 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Manage_files.hpp"

static	int	prog(t_files	*s_dt)
{
	s_dt->file.open(s_dt->name_file1);
	if (!s_dt->file.is_open())
		return (print_err("Erreur : Open_File"));
	if (s_dt->s1.empty() || s_dt->s2.empty())
	{
		s_dt->file.close();
		return (print_err("Erreur : arg empty"));
	}
	s_dt->name_file1 += ".replace";
	s_dt->file_replace.open(s_dt->name_file1);
	if (!s_dt->file.is_open())
	{
		s_dt->file.close();
		return (print_err("Erreur : Open_File"));
	}
	return (find_and_replace(s_dt));
}

int main(int ac, char **av)
{
	t_files	s_dt;

	if (ac == 4)
	{
		s_dt.name_file1 = av[1];
		s_dt.s1 = av[2];
		s_dt.s2 = av[3];
		return (prog(&s_dt));
	}
	else
	{
		return (print_err
				("Erreur :The programme tak the three arguments : name File and two string ! [^_^]"));
	}
	return (0);
}
