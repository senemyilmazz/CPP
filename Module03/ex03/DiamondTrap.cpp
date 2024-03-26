#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
    std::cout << "DiamondTrap default constructor called." << std::endl;
    this->name = "anonim";
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(const std::string& name) : ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
    std::cout << "DiamondTrap " << name << " constructor called." << std::endl;
    this->name = name;
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copyObject) : ClapTrap(copyObject)
{
    std::cout << "DiamondTrap " << copyObject.getName() << " copy constructor called." << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap " << this->name << " destructor called." << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << " DiamondTrap Name: "<< this->name << " - ClapTrap Name: "<< ClapTrap::name << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}