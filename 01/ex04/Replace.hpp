/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Replace.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/20 17:52:13 by cschabra      #+#    #+#                 */
/*   Updated: 2023/12/21 18:04:23 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <string>
# include <iostream>
# include <fstream>
# include <sstream>

# define ERRMSG "Please use input like ./replace filename string1 string2\n"

class Replace
{
	private:
	std::string	_fileName;
	std::string	_s1;
	std::string	_s2;

	public:
	bool	handleFile();
	bool	openFiles(std::ifstream *srcFile, std::ofstream *destFile);
	Replace();
	Replace(const std::string& fileName, const std::string& s1, const std::string& s2);
	~Replace();
};

#endif
