#include "Zombie.hpp"

void Zombie::announce(void) {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
    this->name = name;
}

Zombie::~Zombie() {
    std::cout << this->name << " is dead" << std::endl;
}

// std::string Zombie::getName() {
//     return this->name;
// } //sanırım buna gerek yok!!