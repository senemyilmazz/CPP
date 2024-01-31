#include "libex01.h"

void getValidInput(std::string message, void (Contact::*setFunc)(std::string), std::string (Contact::*getFunc)(void), Contact *newContact) {
    std::string input;

    do {
        std::cout << message ;
        std::getline(std::cin, input);
        (newContact->*setFunc)(input);
    }
    while ((newContact->*getFunc)().empty());
}

static void getNewContactInfos(Contact *newContact)
{
    
    std::cout << std::endl << "Please enter the following infos: " << std::endl;

    getValidInput("First Name: ", &Contact::setFirstName, &Contact::getFirstName, newContact);
    getValidInput("Last Name: ", &Contact::setLastName, &Contact::getLastName, newContact);
    getValidInput("Nick Name: ", &Contact::setNickName, &Contact::getNickName, newContact);
    getValidInput("Phone Number: ", &Contact::setPhoneNumber, &Contact::getPhoneNumber, newContact);
    getValidInput("The Darkest Secret: ", &Contact::setTheDarkestSecret, &Contact::getTheDarkestSecret, newContact);
}

void addProcess(PhoneBook *phoneBook)
{
    Contact newContact;

    getNewContactInfos(&newContact);
    phoneBook->addContact(newContact);
}