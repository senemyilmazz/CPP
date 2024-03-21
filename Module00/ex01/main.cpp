/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senyilma <senyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 03:16:03 by senyilma          #+#    #+#             */
/*   Updated: 2024/03/21 03:16:04 by senyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libex01.hpp"

int commandCheck(std::string command)
{
    command = megaphone(command);
    if (!command.compare("ADD"))
        return ADD;
    else if (!command.compare("SEARCH"))
        return SEARCH;
    else if (!command.compare("EXIT") || command == "")
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
