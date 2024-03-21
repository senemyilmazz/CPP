/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senyilma <senyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 03:16:18 by senyilma          #+#    #+#             */
/*   Updated: 2024/03/21 03:16:19 by senyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::addContact(Contact newContact)
{
    static int i;

    this->contactList[i] = newContact;
    i += 1;
    if (i == 8)
        i = 0;
}

Contact* PhoneBook::getContactList() {
    return this->contactList;
}

void PhoneBook::searchContact(int contactNum)
{
    contactList[contactNum - 1].showContactInfos();
}

int PhoneBook::getTotalContactCount() 
{
    int i = 0;
    while (i < 8 && !this->contactList[i].getFirstName().empty())
        i++;
    return i;
}

