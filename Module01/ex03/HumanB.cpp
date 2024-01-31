#include "HumanB.hpp"

#include <iostream>

void HumanB::attack() {
    std::cout << this->name << " attacks with their " << this->weapon << std::endl;
}

HumanB::HumanB(std::string name) {
    this->name = name;
    this->weapon = "";
}