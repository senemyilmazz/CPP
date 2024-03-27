#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap default constructor called." << std::endl;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    this->maxHit = 100;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
    std::cout << "FragTrap " << name << " constructor called." << std::endl;
    this->name = name; 
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    this->hitPoints = 100;
}

FragTrap::FragTrap(const FragTrap& copyObject) : ClapTrap(copyObject)
{
    std::cout << "FragTrap " << copyObject.getName() << " copy constructor called." << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->name << " destructor called." << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if (this->hitPoints > 0)
    {
        if (this->energyPoints > 0) {
            this->energyPoints -= 1;

            std::cout << "FragTrap "<< this->name<< " attacked "<< target;
            std::cout << " , causing "<< this->attackDamage<< " points of damage. ";
            std::cout << "(EP:"<< this->energyPoints<< " - HP:"<< this->hitPoints<< ")"<< std::endl;
        }
        else
            std::cout << "FragTrap " << this->name << " has no energy. ";
    }
}

void FragTrap::highFivesGuys()
{
    if (this->energyPoints > 0 && this->hitPoints > 0)
    {
        std::cout << "FragTrap " << this->name << ": High Fives!" << std::endl;
    }
}
