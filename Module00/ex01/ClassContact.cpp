#include "libex01.h"

void Contact::setFirstName(std::string firstName){
    this->firstName = firstName;
}

void Contact::setLastName(std::string lastName){
    this->lastName = lastName;
}

void Contact::setNickName(std::string nickName){
    this->nickName = nickName;
}

void Contact::setPhoneNumber(std::string phoneNumber){
    bool allDigit = true;

    for (char n : phoneNumber) {
        if (!std::isdigit(n))
            allDigit = false;
    }

    if (phoneNumber.length() != 11 || !allDigit)
        std::cout << "Please enter a valid number, the phone number contains 11 characters and digits only." << std::endl;
    else
        this->phoneNumber = phoneNumber;
}

void Contact::setTheDarkestSecret(std::string theDarkestSecret){

    this->theDarkestSecret = theDarkestSecret;
}

std::string Contact::getFirstName() {
    return this->firstName;
}

std::string Contact::getLastName(){
    return this->lastName;
}

std::string Contact::getNickName(){
    return this->nickName;
}

std::string Contact::getPhoneNumber(){
    return this->phoneNumber;
}

std::string Contact::getTheDarkestSecret(){
    return this->theDarkestSecret;
}