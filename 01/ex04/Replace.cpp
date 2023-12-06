#include "Replace.hpp"

bool	Replace::handleFile()
{
	std::string		str;
	std::ifstream	srcFile;
	std::ofstream	destFile;

	srcFile.open(_fileName.c_str(), std::ios::in);
	if (srcFile.fail())
	{
		std::cerr << "Couldn't open source file.. Make one first :)\n";
		return (false);
	}
	destFile.open("copy", std::ios::out);
	if (destFile.fail())
	{
		std::cerr << "Couldn't create destination file..\n";
		return (false);
	}
	while (getline(srcFile, str))
	{
		destFile << str;
        if (!srcFile.eof())
            destFile << '\n';
	}
	// replace all occurences of s1 with s2
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
