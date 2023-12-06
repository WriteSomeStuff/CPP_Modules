
#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <string>
# include <iostream>
# include <fstream>

class Replace
{
	private:
	std::string	_fileName;
	std::string	_s1;
	std::string	_s2;

	public:
	bool	handleFile();
	Replace();
	Replace(const std::string& fileName, const std::string& s1, const std::string& s2);
	~Replace();
};

#endif
