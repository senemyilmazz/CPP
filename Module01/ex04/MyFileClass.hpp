#ifndef MY_FILE_CLASS_HPP
# define  MY_FILE_CLASS_HPP

# include <iostream>
# include <string>
# include <fstream>

class MyFileClass 
{
	private:
		std::string fileContent;
		std::string fileName;

	public:
		MyFileClass(std::string sourcefileName);
		
		void fillFile();
		void setFileContent(std::string fileContent);
		void replace(std::string s1, std::string s2);
};

#endif