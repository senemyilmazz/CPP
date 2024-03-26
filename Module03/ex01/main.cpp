#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap zoo("Zoo");

    std::cout << "****" << std::endl;
    
    zoo.guardGate();
    
    std::cout << "****" << std::endl;
    
    ClapTrap boo = ScavTrap("Boo");
    
    std::cout << "****" << std::endl;
    
    boo.attack(zoo.getName());

    std::cout << "****" << std::endl;
}