/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senyilma <senyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 03:38:05 by senyilma          #+#    #+#             */
/*   Updated: 2024/03/21 03:38:06 by senyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void) 
{
    std::string string = "HI THIS IS BRAIN";

    std::string *stringPTR = &string;

    std::string &stringREF = string;

    std::cout << &string << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout<< &stringREF << std::endl;

    std::cout<< string << std::endl;
    std::cout<< *stringPTR << std::endl;
    std::cout<< stringREF << std::endl;
}