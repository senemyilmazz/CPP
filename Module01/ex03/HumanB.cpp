#include "HumanB.hpp"
#include <iostream>

void HumanB::attack() {
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

HumanB::HumanB(std::string name) :weapon(nullptr){
    this->name = name;
}

void HumanB::setWeapon(Weapon &weapon) {
   this->weapon = &weapon;
}