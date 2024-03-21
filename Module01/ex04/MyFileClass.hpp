#ifndef MY_FILE_CLASS_HPP
# define  MY_FILE_CLASS_HPP

# include <iostream>
# include <string>
# include <fstream>
#include <cstdlib>

class MyFileClass 
{
	private:
		std::string fileContent;
		std::string fileName;
		
		void fillFile();
		void setFileContent(std::string fileContent);

	public:
		MyFileClass(std::string sourcefileName);
		
		void replace(std::string s1, std::string s2);
};

#endif