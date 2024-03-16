#ifndef LIBEX01_H
# define LIBEX01_H

# include "PhoneBook.hpp"
// # include "Contact.hpp"
# include <iostream>
# include <cstdlib>

# define ADD 1
# define SEARCH 2
# define EXIT 3

void addProcess(PhoneBook *phoneBook);
void searchProcess(PhoneBook *phoneBook);
void printMessage(std::string message);
void printMessageWithNewLine(std::string message);
void printNewLine();
std::string megaphone(std::string str);
bool isAllDigit(std::string str);
std::string trim(std::string str);
std::string formatString(std::string str);

#endif