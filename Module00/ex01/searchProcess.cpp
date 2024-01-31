#include "libex01.h"

void onlyTen(std::string data)
{
    std::string trimmedData;
    size_t first;
    size_t last;
    int len;

    first = data.find_first_not_of(" ");
    last = data.find_last_not_of(" ");
    data = data.substr(first, last - first + 1);

    len = data.length();
    if (len > 10 )
        std::cout << data.substr(0, 9) << '.' << '|';
    else
        std::cout << std::setw(10) << std::right << data << '|';
}

void putContactList(PhoneBook phoneBook) {
    Contact *contactList;
    contactList = phoneBook.getContactList();

    std::cout << std::endl << "PHONE BOOK" << std::endl;

    for (int i = 0; i < 8;  i++) {
        if (!contactList[i].getFirstName().empty()) {
            std::cout << i + 1 << "|";
            onlyTen(contactList[i].getFirstName());
            onlyTen(contactList[i].getLastName());
            onlyTen(contactList[i].getNickName());
            std::cout << std::endl;
        }
    }
    std::cout << std::endl;
}

void searchProcess(PhoneBook *phoneBook) {
    putContactList(*phoneBook);
    std::string input;
    int dirNum = 0;

    std::cout << "Please enter the directory number you wish to search." << std::endl;
    do {
        std::cout << "Directory number: ";
        try {
            std::cin >> input;
            dirNum = std::stoi(input);
        }
        catch (std::invalid_argument error) {
            std::cerr << "Please enter a digit between 1 and 8 only." << std::endl;
        }
    }
    while (!dirNum);
    std::cout << std::endl;
    phoneBook->searchContact(dirNum);
}