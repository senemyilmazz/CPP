#include "DiamondTrap.hpp"


int main(void)
{
    DiamondTrap doo = DiamondTrap("Doo");

    std::cout << "-------" << std::endl;

    doo.whoAmI();    
    doo.highFivesGuys();
    doo.guardGate();

    std::cout << "**********" << std::endl;

    ScavTrap soo = DiamondTrap("Soo");

    std::cout << "-------" << std::endl;

    std::cout << soo.getEnergyPoints() << std::endl;
    std::cout << doo.getEnergyPoints() << std::endl;

    std::cout << "**********" << std::endl;

    FragTrap foo = DiamondTrap("Foo");

    std::cout << "-------" << std::endl;

    std::cout << foo.getHitPoints() << std::endl;
    std::cout << foo.getAttackDamage() << std::endl; 
    std::cout <<  doo.getHitPoints() << std::endl;
    std::cout <<  doo.getAttackDamage() << std::endl;

    std::cout << "**********" << std::endl;

    DiamondTrap* d = new DiamondTrap(); 
    delete d;

    std::cout << "**********" << std::endl;

}