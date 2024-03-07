#include "libex01.h"

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
    PhoneBook phoneBook;
    std::string newCommand;
    int command;
    
    printNewLine();
    printMessage("  --PHONEBOOK--   ");
    do {
        printNewLine();
        printMessage("Please enter (ADD, SEARCH, EXIT): ");
        std::getline(std::cin, newCommand);
        command = commandCheck(newCommand);
        if (command == ADD)
            addProcess(&phoneBook);
        else if (command == SEARCH)
            searchProcess(&phoneBook);
    }
    while (command != EXIT);
    return 0;
}

//Tüm include’lar diğerleri tarafından bağımsızca include edilebilmelidir. Include’lar bağlı oldukları diğer include’ları içermelidir.!!!!!!!