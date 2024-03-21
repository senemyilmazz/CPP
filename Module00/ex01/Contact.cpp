/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senyilma <senyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 03:16:12 by senyilma          #+#    #+#             */
/*   Updated: 2024/03/21 03:16:13 by senyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libex01.hpp"

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

void Contact::showContactInfos() {
    std::cout << "First Name: " << this->firstName << std::endl;
    std::cout << "Last Name: " << this->lastName << std::endl;
    std::cout << "Nick Name: " << this->nickName << std::endl;
    std::cout << "Phone Number: " << this->phoneNumber << std::endl;
    std::cout << "The Darkest Secret: " << this->theDarkestSecret << std::endl;
}