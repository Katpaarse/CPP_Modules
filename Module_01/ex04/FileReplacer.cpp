/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FileReplacer.cpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/18 17:05:48 by jukerste      #+#    #+#                 */
/*   Updated: 2026/05/23 15:34:08 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplacer.hpp"

FileReplacer::FileReplacer(std::string filename, std::string str1, std::string str2)
{
	this->_filename = filename;
	this->_str1 = str1;
	this->_str2 = str2;
}

FileReplacer::~FileReplacer()
{
	
}

std::string FileReplacer::_replaceString(std::string content)
{
	if (_str1.empty())
		return (content);
	std::string	result;
	size_t 	i = 0;
	size_t	prev_i = 0;
	while ((i = content.find(_str1, prev_i)) != std::string::npos)
	{
		result = result + content.substr(prev_i, i - prev_i);
		result = result + _str2;
		prev_i = i + _str1.length();
	}
	result = result + content.substr(prev_i);
	return (result);
}

int FileReplacer::execute()
{
	std::ifstream inputFile(this->_filename);
	if (!inputFile.is_open())
	{
		std::cerr << "Could not open file" << std::endl;
		return (1);
	}
	std::ofstream outputFile(this->_filename + ".replace");
	if (!outputFile.is_open())
	{
		std::cerr << "Could not write into or creat output file" << std::endl;
		inputFile.close();
		return (1);
	}
	std::string line;
	std::string fileContent;
	while (std::getline(inputFile, line))
    {
        fileContent = fileContent + line;
        if (!inputFile.eof())
            fileContent = fileContent + "\n";
    }
    outputFile << this->_replaceString(fileContent);
	inputFile.close();
	outputFile.close();
	return (0);
}
