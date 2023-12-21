/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Replace.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/20 17:51:57 by cschabra      #+#    #+#                 */
/*   Updated: 2023/12/21 18:13:30 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

bool	Replace::openFiles(std::ifstream *srcFile, std::ofstream *destFile)
{
	srcFile->open(_fileName.c_str(), std::ios::in);
	if (srcFile->fail())
	{
		std::cerr << "Couldn't open source file.. Check the name :)\n";
		return (false);
	}
	_fileName.insert(_fileName.length(), ".replace");
	destFile->open(_fileName, std::ios::out);
	if (destFile->fail())
	{
		std::cerr << "Couldn't create destination file..\n";
		return (false);
	}
	return (true);
}

bool	Replace::handleFile()
{
	std::string			str;
	std::ifstream		srcFile;
	std::ofstream		destFile;
	std::size_t			pos (0);

	if (!openFiles(&srcFile, &destFile))
		return (false);
	while (std::getline(srcFile, str))
	{
		while (1)
		{
			pos = str.find(_s1);
			if (pos == std::string::npos)
				break ;
			str.erase(pos, _s1.length());
			str.insert(pos, _s2);
		}
		destFile << str;
		if (!srcFile.eof())
			destFile << '\n';
	}
	std::cout << "Done\n";
	srcFile.close();
	destFile.close();
	return (true);
}

Replace::Replace()
{
}

Replace::Replace(const std::string& fileName, const std::string& s1, const std::string& s2)
{
	_fileName = fileName;
	_s1 = s1;
	_s2 = s2;
}

Replace::~Replace()
{
}
