/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchProcess.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senyilma <senyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 03:16:22 by senyilma          #+#    #+#             */
/*   Updated: 2024/03/21 03:36:18 by senyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libex01.hpp"

void showOnlyTen(std::string content)
{
    int len;

    content = trim(content);
    len = content.length();
    if (len > 10 )
        printMessage(content.substr(0, 9) + ".|");
    else
        printMessage(formatString(content) + "|");
}

void showContactList(PhoneBook *phoneBook) 
{
    Contact *contactList = phoneBook->getContactList();

    printNewLine();
    printMessageWithNewLine("PHONE BOOK");

    for (int i = 0; i < 8;  i++) 
    {
        if (!contactList[i].getFirstName().empty()) 
        {
            std::cout << "         " << i + 1 << "|";
            showOnlyTen(contactList[i].getFirstName());
            showOnlyTen(contactList[i].getLastName());
            showOnlyTen(contactList[i].getNickName());
            printNewLine();
        }
        else
            return;
    }
    printNewLine();
}

int getValidOrderNum(int totalContactCount) 
{
    std::string input;
    int num;
    int rowNum;

    rowNum = 0;
    printMessageWithNewLine("Please enter the order number you would like to review.");
    do {
        printMessage("Order number: ");
        std::getline(std::cin, input);
        num = atoi(input.c_str());
        if (num < 1 || num > totalContactCount)
            std::cout << "Please enter a digit between 1 and " << totalContactCount << " only." << std::endl;
        else
            rowNum = num;
    }
    while (!rowNum);
    printNewLine();
    return rowNum;
}

void searchProcess(PhoneBook *phoneBook) 
{
    int rowNum;
    int  totalContactCount = phoneBook->getTotalContactCount();

    if (totalContactCount == 0) {
        printMessageWithNewLine("Please add a contact first.");
        return ;
    }
    showContactList(phoneBook);
    rowNum = getValidOrderNum(totalContactCount);
    phoneBook->searchContact(rowNum);
}
