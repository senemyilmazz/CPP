#include "HumanB.hpp"
#include <iostream>

void HumanB::attack(void) 
{
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

HumanB::HumanB(std::string name) 
{
    this->name = name;
    this->weapon = nullptr;
}

void HumanB::setWeapon(Weapon &weapon)
{
   this->weapon = &weapon;
}