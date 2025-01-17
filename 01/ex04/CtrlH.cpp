/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CtrlH.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdidi <ialdidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 20:24:26 by ialdidi           #+#    #+#             */
/*   Updated: 2025/01/18 15:24:42 by ialdidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CtrlH.hpp"

void CtrlH::replace(std::string filename, std::string search, std::string replace) {
	if (search.empty()) {
		std::cout << "Search string is empty" << std::endl;
		return ;
	}

	std::ifstream infile(filename.c_str());

	if (!infile.is_open()) {
		std::cout << "File " + filename + " could not be opened" << std::endl;
		return ;
	}
	std::string outfilename = filename + "_replace";
	std::ofstream outfile(outfilename.c_str(), std::ios::trunc);

	if (!outfile.is_open()) {
		std::cout << "Cannot create destination file: " + outfilename;
	}
	else {	
		std::string buffer;
		
		if (std::getline(infile, buffer, '\0')) {
			std::size_t pos = 0;

			while ((pos = buffer.find(search, pos)) != std::string::npos)
			{
				buffer.erase(pos, search.length());
				buffer.insert(pos, replace);
				pos += search.length();
			}
			outfile << buffer;
		}
		else {
			std::cout << "Empty file provided" << std::endl;
		}
	}
	infile.close();
	outfile.close();
}