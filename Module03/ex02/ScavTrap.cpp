#include "ScavTrap.hpp"


//Constructors
ScavTrap::ScavTrap() : ClapTrap() 
{
    std::cout << "ScavTrap default constructor called." << std::endl;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    this->maxHit = 100;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) 
{
    std::cout << "ScavTrap " << name << " constructor called." << std::endl;
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& copyObject) : ClapTrap(copyObject)
{
    std::cout << "ScavTrap "<< this->name << " copy constructor called." << std::endl;
}

//Destructor
ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->name << " destructor called." << std::endl;
}

//Methods
void ScavTrap::attack(const std::string& target)
{
    if (this->hitPoints > 0)
    {
        if (this->energyPoints > 0) {
            this->energyPoints -= 1;

            std::cout << "ScavTrap "<< this->name<< " attacked "<< target;
            std::cout << " , causing "<< this->attackDamage<< " points of damage. ";
            std::cout << "(EP:"<< this->energyPoints<< " - HP:"<< this->hitPoints<< ")"<< std::endl;
        }
        else
            std::cout << "ScavTrap " << this->name << " has no energy. ";
    }
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}