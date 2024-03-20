#include "libex01.hpp"

void printMessage(std::string message) {
    std::cout << message;
}

void printNewLine() {
    std::cout << std::endl;
}

void printMessageWithNewLine(std::string message) {
   printMessage(message);
   printNewLine();
}

std::string megaphone(std::string str)
{
    for (int i = 0 ; str[i] ; i++)
		str[i] = std::toupper(str[i]);
    return str;
}

bool isAllDigit(std::string str) {
    for (int i = 0; str[i]; i++) {
        if (!std::isdigit(str[i]))
            return false;
    }
    return true;
}

std::string trim(std::string str) {
    size_t first;
    size_t last;
    std::string trimmedString;

    first = str.find_first_not_of(" ");
    last = str.find_last_not_of(" ");
    trimmedString = str.substr(first, last - first + 1);
    
    return trimmedString;
}

std::string formatString(std::string str) {
    int len = str.length();
    int numberOfSpace = 10 - len;

    while (numberOfSpace--) {
        str = " " + str;
    }
    return str;
}