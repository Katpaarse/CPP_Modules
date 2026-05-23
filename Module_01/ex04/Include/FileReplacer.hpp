/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FileReplacer.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/18 17:03:55 by jukerste      #+#    #+#                 */
/*   Updated: 2026/05/23 15:31:50 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <fstream>

class FileReplacer
{
	private:
		std::string	_str1;
		std::string	_str2;
		std::string	_filename;
		std::string _replaceString(std::string content);
	
	public:
		FileReplacer(std::string filename, std::string str1, std::string str2);
		~FileReplacer();
		int	execute();
};
