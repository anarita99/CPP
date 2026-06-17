/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 10:32:27 by adores            #+#    #+#             */
/*   Updated: 2026/06/17 12:11:48 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int replace(std::string filename, std::string s1, std::string s2)
{
	if(s1.empty())
		return 1;

	std::fstream file;
	file.open(filename.c_str(), std::ios::in);
	if(!file.is_open())
	{
		std::cout << "Error opening file." << std::endl;
		return 1;
	}

	std::fstream replace_file;
	std::string replace_name;
	replace_name = filename + ".replace";
	replace_file.open(replace_name.c_str(), std::ios::out);
	if(!replace_file.is_open())
	{
		std::cout << "Error opening second file." << std::endl;
		file.close();
		return 1;
	}

	std::string str;
	size_t pos;
	while (getline(file, str))
	{
		pos = 0;
		while ((pos = str.find(s1, pos)) != std::string::npos)
		{
			str.erase(pos, s1.length());
			str.insert(pos, s2);
			pos += s2.length();
		}
		replace_file << str << "\n";
	}
	file.close();
	replace_file.close();
	return 0;
}