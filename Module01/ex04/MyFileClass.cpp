#include "MyFileClass.hpp"

void MyFileClass::setFile(std::ofstream& file) {
	this->file = &file;
}

void MyFileClass::setFileContent(std::string fileContent) {
	this->fileContent = fileContent;
}


void MyFileClass::replace(std::string s1, std::string s2) {
	std::string fullContent;
	std::string preContent;
	std::string postContent;

	fullContent = fileContent;
	int j = 0;
	while(fullContent.find(s1)!= std::string::npos) {
		j = fullContent.find(s1);
		preContent = fullContent.substr(0, j);
		j += s1.length();
		postContent = fullContent.substr(j, fileContent.length() - j );
		fullContent = preContent.append(s2).append(postContent);
		std::cout <<fullContent<<std::endl;
	}
	*this->file << fullContent;
	this->fileContent = fullContent;
}