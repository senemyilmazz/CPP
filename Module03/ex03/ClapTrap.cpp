#include "ClapTrap.hpp"

//Constructors
ClapTrap::ClapTrap() {
    std::cout << "ClapTrap default constructor called." << std::endl;
    this->name = "anonim";
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
}

ClapTrap::ClapTrap(std::string name) {
    std::cout << "ClapTrap " << name << " constructor called." << std::endl;
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
}

ClapTrap::ClapTrap(const ClapTrap& copy) {
    std::cout << "ClapTrap " << copy.getName() <<" copy constructor called." << std::endl;
    *this = copy;
}

//Destructor
ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << this->name << " destructor called." << std::endl;
}


//Preporties
//  Setters
void ClapTrap::setName(std::string name) {
    this->name = name;
}

void ClapTrap::setHitPoints(unsigned int hitPoints) {
    this->hitPoints = hitPoints;
}

void ClapTrap::setEnergyPoints(unsigned int energyPoints) {
    this->energyPoints = energyPoints;
}

void ClapTrap::setAttackDamage(unsigned int attackDamage) {
    this->attackDamage = attackDamage;
}

//  Getters
std::string ClapTrap::getName() const {
    return this->name;
}

int ClapTrap::getHitPoints() const {
    return this->hitPoints;
}

int ClapTrap::getEnergyPoints() const {
    return this->energyPoints;
}

int ClapTrap::getAttackDamage() const {
    return this->attackDamage;
}

//Methods
void ClapTrap::attack(const std::string& target) {
    if (this->hitPoints > 0)
    {
        if (this->energyPoints > 0) {
            this->energyPoints -= 1;

            std::cout << "ClapTrap "<< this->name<< " attacked "<< target;
            std::cout << " , causing "<< this->attackDamage<< " points of damage. ";
            std::cout << "(EP:"<< this->energyPoints<< " - HP:"<< this->hitPoints<< ")"<< std::endl;
        }
        else
            std::cout << "ClapTrap " << this->name << " has no energy. ";
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (amount > this->hitPoints)
        this->hitPoints = 0;
    else
        this->hitPoints -= amount;
    std::cout << "ClapTrap " << this->name << " took " << amount << " points of damage. ";
    std::cout << "(EP:" << this->energyPoints << " - HP:" << this->hitPoints << ")" << std::endl;
    if (this->hitPoints == 0)
        std::cout << "ClapTrap " << this->name << " lost the game." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->hitPoints > 0)
    {
        if (this->energyPoints > 0 &&  this->hitPoints + amount <= this->maxHit) {
            this->hitPoints += amount;
            this->energyPoints -= 1;

            std::cout << "ClapTrap " << this->name << " repaired itself. ";
            std::cout << "(EP:" << this->energyPoints << " - HP:" <<    this->hitPoints << ")" << std::endl;
        }
        else
        {
            std::cout << "ClapTrap " << this->name;
            this->energyPoints <= 0 ? std::cout <<  " has no energy." 
                                    : std::cout << " cannot have more than " << this->maxHit << " hit points."
                                    << std::endl;
        }
    }
}

//Operator Overloading
ClapTrap& ClapTrap::operator=(const ClapTrap& copy) {
    std::cout << "Copy assignment operator called." << std::endl;
    if (this == &copy)
        return *this;
    this->name = copy.getName();
    this->hitPoints = copy.getHitPoints();
    this->energyPoints = copy.getEnergyPoints();
    this->attackDamage = copy.getAttackDamage();

    return *this;
}