#include "libex01.h"

void PhoneBook::addContact(Contact newContact) {
    static int i;

    this->contactList[i] = newContact;
    i++;
    if (i == 8)
        i = 0;
}

void PhoneBook::searchContact(int i)
{
        std::cout << "First Name: " << this->contactList[i - 1].getFirstName() << std::endl;
        std::cout << "Last Name: " << this->contactList[i - 1].getLastName() << std::endl;
        std::cout << "Nick Name: " << this->contactList[i - 1].getNickName() << std::endl;
        std::cout << "Phone Number: " << this->contactList[i - 1].getPhoneNumber() << std::endl;
        std::cout << "The Darkest Secret: " << this->contactList[i - 1].getTheDarkestSecret() << std::endl;
}

Contact* PhoneBook::getContactList() {
    return this->contactList;
}