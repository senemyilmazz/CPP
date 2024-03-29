/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senyilma <senyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 08:54:23 by senyilma          #+#    #+#             */
/*   Updated: 2024/03/29 08:54:24 by senyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Cat default constructor called." << std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat& copyObject) : Animal(copyObject)
{
    std::cout << "Cat copy constructor called." << std::endl;
}

Cat& Cat::operator=(const Cat& copyObject)
{
    std::cout << "Cat copy assignment operator called." << std::endl;
    this->type = copyObject.getType(); 
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called." << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow <3" << std::endl;
}