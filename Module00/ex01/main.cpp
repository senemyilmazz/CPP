#include "libex01.h"

std::string megaphone(std::string str)
{
    for (int i = 0 ; str[i] ; i++)
		str[i] = std::toupper(str[i]);
    return str;
}

int commandCheck(std::string command)
{
    command = megaphone(command);
    if (!command.compare("ADD"))
        return ADD;
    else if (!command.compare("SEARCH"))
        return SEARCH;
    else if (!command.compare("EXIT"))
        return EXIT;
    else
        return 0;
}

int main(void)
{
    std::string newCommand;
    int command;
    PhoneBook phoneBook;

    do {
        std::cout << std::endl << "Please enter (ADD, SEARCH, EXIT): ";
        std::cin >> newCommand;
        command= commandCheck(newCommand);
        if (command == ADD)
            addProcess(&phoneBook);
        else if (command == SEARCH)
            searchProcess(&phoneBook);
    }
    while (command != EXIT);
    return 0;
}