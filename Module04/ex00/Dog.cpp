/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senyilma <senyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 08:54:25 by senyilma          #+#    #+#             */
/*   Updated: 2024/03/29 08:54:26 by senyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog() : Animal()
{
    std::cout << "Dog default constructor called." << std::endl;
    this->type = "Dog";
}

Dog::Dog(const Dog& copyObject) : Animal(copyObject)
{
    std::cout << "Dog copy constructor called." << std::endl;
    *this = copyObject;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called." << std::endl;
}

Dog& Dog::operator=(const Dog& copyObject)
{
    std::cout << "Dog copy assignment operator called." << std::endl;
    this->type = copyObject.getType(); 
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Bark!" << std::endl;
}