#include "MyFileClass.hpp"

MyFileClass::MyFileClass(std::string sourceFileName)
{
	std::string line;

	std::ifstream sourceFile(sourceFileName.c_str(), std::ios::in);

	if (!sourceFile.is_open()) 
	{
		std::cerr << "File error!" << std::endl;
		exit (1);
	}
	this->fileName = sourceFileName + "Copy";
	while(std::getline(sourceFile, line)) 
		this->fileContent += line + "\n";
	sourceFile.close();
	fillFile();
}

void MyFileClass::fillFile() 
{
	std::ofstream copyFile(this->fileName.c_str(), std::ios::out | std::ios::trunc);
	if (!copyFile.is_open()) 
	{
		std::cerr << "File error!" << std::endl;
		exit (1);
	}
	copyFile << this->fileContent;
	copyFile.close();
}

void MyFileClass::setFileContent(std::string fileContent) 
{
	this->fileContent = fileContent;
}

void MyFileClass::replace(std::string s1, std::string s2) 
{
	std::string fullContent;
	std::string preContent;
	std::string postContent;
	
	if (s1.empty() || s1 == s2)
		return ;
	fullContent = this->fileContent;
	std::string::size_type position = 0;
	while((position = fullContent.find(s1)) != std::string::npos) 
	{
		preContent = fullContent.substr(0, position);
		position += s1.length();
		postContent = fullContent.substr(position, fullContent.length() - position);
		fullContent = preContent + s2 + postContent;
	}
	setFileContent(fullContent);
	fillFile();
}