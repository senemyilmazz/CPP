#ifndef MY_FILE_CLASS_HPP
# define  MY_FILE_CLASS_HPP

#include <iostream>
#include <string>
#include <fstream>

class MyFileClass {
	private:
		std::ofstream* file;
		std::string fileContent;
	public:
		void setFile(std::ofstream& file);
		void setFileContent(std::string fileContent);
		void replace(std::string s1, std::string s2);
};

#endif