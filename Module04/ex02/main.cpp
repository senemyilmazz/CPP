/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senyilma <senyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 08:55:20 by senyilma          #+#    #+#             */
/*   Updated: 2024/03/29 08:58:05 by senyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{   
    int size = 20; //number of animal
    int i = -1;

    Animal* animal[size];

    std::cout << "--- Constructions---" << std::endl;
    try {
        while (++i < size/2)
            animal[i] = new Dog();
        while (i < size)
            animal[i++] = new Cat();
    } catch (const std::bad_alloc&)
    {
        for (int j = 0; j < i; j++)
            delete animal[j];
        return 1;
    }

    std::cout << "---" << std::endl;

    std::cout << "---Destructions---" << std::endl;
    for(int j = 0; j < size ; j++)
        if (animal[j])
            delete animal[j];
    return 0;
}
