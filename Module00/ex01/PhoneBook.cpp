#include "libex01.hpp"

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

