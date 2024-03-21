/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senyilma <senyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 03:39:01 by senyilma          #+#    #+#             */
/*   Updated: 2024/03/21 03:39:02 by senyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl << std::endl ;
}

void Harl::info(void)
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You did not put enough bacon in my burger! If you did, I would not be asking for more!" << std::endl << std::endl;
}

void Harl::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl << "I've been coming for years whereas you started working here since last month." << std::endl <<std::endl;
}

void Harl::error(void)
{
    std::cout <<"[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl << std::endl;
}

void Harl::complain(std::string level) 
{    
    void (Harl::*ptr_complain[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    int index = 0;
    while (index < 4 && levels[index].compare(level))
        index++;

    switch (index) 
    {
        case DEBUG :
            (this->*ptr_complain[DEBUG])();
        case INFO :
            (this->*ptr_complain[INFO])();
        case WARNING :
            (this->*ptr_complain[WARNING])();
        case ERROR :
            (this->*ptr_complain[ERROR])();
            break;
        default :
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            return;
    }
}