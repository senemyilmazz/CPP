#include "HumanA.hpp"
#include <iostream>

void HumanA::attack() {
    std::cout << this->name << " attacks with their " << this->weapon << std::endl;
}

HumanA::HumanA(std::string name, std::string weapon) {
    this->name = name;
    this->weapon = weapon;
}