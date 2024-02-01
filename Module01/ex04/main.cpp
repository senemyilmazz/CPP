
#include <fstream>
#include <iostream>
#include "MyFileClass.hpp"

int main(int ac, char *av[]) {
	if (ac == 4) {
		std::string content;
		std::string fullContent = "";
		
		std::string copyFileName = av[1];
		copyFileName.append("Copy");

		std::ifstream file(av[1], std::ios::in);
		std::ofstream newCopy(copyFileName);

		if (!file.is_open() || !newCopy.is_open()) {
			std::cerr << "File error!" << std::endl;
			return 1;
		}

		while (getline(file, content))
			fullContent.append(content).append("\n");

		newCopy << fullContent << std::endl;

		MyFileClass copyFile;
		copyFile.setFile(newCopy);
		copyFile.setFileContent(fullContent);
		copyFile.replace(av[2], av[3]);


	}
	return 0;
}
