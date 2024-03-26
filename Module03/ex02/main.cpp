#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    FragTrap foo("Foo");

    std::cout << "-------" << std::endl;
    
    foo.highFivesGuys();

    std::cout << "***" << std::endl;

    ClapTrap coo = FragTrap("Coo");
    
    std::cout << "-------" << std::endl;
    
    coo.attack(foo.getName());

    std::cout << "***" << std::endl;

    ClapTrap soo = ScavTrap("Soo");
    
    std::cout << "-------" << std::endl;
    
    coo = soo;
    coo.setName("Coo");

    std::cout << "-------" << std::endl;
    
    coo.attack(foo.getName());

    std::cout << "***" << std::endl;

    ScavTrap* a = new ScavTrap();
    delete a;

    std::cout << "***" << std::endl;
}