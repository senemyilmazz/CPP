/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senyilma <senyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 08:54:59 by senyilma          #+#    #+#             */
/*   Updated: 2024/03/29 08:58:33 by senyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{   

    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;

    int size = 20; //number of animal
    int a = -1;

    Animal* animal[size];

    std::cout << "--- Constructions---" << std::endl;
    try {
        while (++a < size/2)
            animal[a] = new Dog();
        while (a < size)
            animal[a++] = new Cat();
    } catch (const std::bad_alloc&)
    {
        for (int j = 0; j < a; j++)
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
