/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senyilma <senyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 08:54:50 by senyilma          #+#    #+#             */
/*   Updated: 2024/03/29 08:54:51 by senyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

//Construtors
Brain::Brain()
{
    std::cout << "Brain default constructor called." << std::endl;
}

Brain::Brain(const Brain& copyObject)
{
    std::cout << "Brain copy constructor called." << std::endl;
    *this = copyObject;
}

//Destructor
Brain::~Brain()
{
    std::cout << "Brain destructor called." << std::endl;
}

//Operator Overloading
Brain& Brain::operator=(const Brain& copyObject)
{
    std::cout << "Brain copy assignment operator called." << std::endl;
    for (int i=0 ; i < 100 ; i++)
        this->ideas[i] = copyObject.ideas[i];
    return *this;
}