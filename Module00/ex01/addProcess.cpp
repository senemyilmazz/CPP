#include "libex01.h"

std::string getValidInput(std::string message) {
    std::string input;

    do {
        printMessage(message);
        std::getline(std::cin, input);
    }
    while (input.empty());
    return (input);
}

std::string getValidPhoneNumber(std::string message) {

    std::string phoneNumber;

    phoneNumber = getValidInput(message);

    if (phoneNumber.length() != 11 || !isAllDigit(phoneNumber)) {
        printMessageWithNewLine("Please enter a valid number, the phone number contains 11 characters and digits only.");
        phoneNumber = getValidPhoneNumber(message);
    }
    return phoneNumber;
}


void addProcess(PhoneBook *phoneBook) {
    Contact newContact;

    printNewLine();
    printMessageWithNewLine("Please enter the following infos: ");

    newContact.setFirstName(getValidInput("First Name: "));
    newContact.setLastName(getValidInput("Last Name: "));
    newContact.setNickName(getValidInput("Nick Name: "));
    newContact.setPhoneNumber(getValidPhoneNumber("Phone Number: "));
    newContact.setTheDarkestSecret(getValidInput("The Darkest Secret: "));

    phoneBook->addContact(newContact);
}
