#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
    std::cout << "ClapTrap " << name << " is ready for game." << std::endl;
    this->name = "anonim";
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name) {
    std::cout << "ClapTrap " << this->name << " is ready for game." << std::endl;
    this->name = name;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& copy) {
    std::cout << "Copy constructor called." << std::endl;
    this->name = copy.name;
    this->hitPoints = copy.hitPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy) {
    std::cout << "Copy assignment operator called." << std::endl;
    if (this == &copy)
        return *this;
    this->name = copy.name;
    this->hitPoints = copy.hitPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;

    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << this->name << " left the game." << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (this->energyPoints > 0) {
        this->energyPoints -= 1;

        std::cout << this->name <<  " attacked " << target << " , causing " << this->attackDamage << " points of damage. (EP:" << this->energyPoints << " - HP:" << this->hitPoints << ")" << std::endl;
    }
    else
        this->attackDamage = 0;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (amount > 0) {
        this->hitPoints -= amount;

        std::cout << this->name << " took damage. (EP:" << this->energyPoints << " - HP:" << this->hitPoints << ")" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->energyPoints > 0) {

        this->hitPoints += amount;
        this->energyPoints -= 1;

        std::cout << this->name << " repaired itself. (EP:" << this->energyPoints << " - HP:" << this->hitPoints << ")" << std::endl;
    }
    else
        attackDamage = 0;
}


/*-----SETTERS-----*/
void ClapTrap::setName(std::string name) {
    this->name = name;
}

void ClapTrap::setHitPoints(int hitPoints) {
    this->hitPoints = hitPoints;
}

void ClapTrap::setEnergyPoints(int energyPoints) {
    this->energyPoints = energyPoints;
}

void ClapTrap::setAttackDamage(int attackDamage) {
    this->attackDamage = attackDamage;
}

/*--------GETTERS---------*/
std::string ClapTrap::getName() {
    return this->name;
}

int ClapTrap::getHitPoints() {
    return this->hitPoints;
}

int ClapTrap::getEnergyPoints() {
    return this->energyPoints;
}

int ClapTrap::getAttackDamage() {
    return this->attackDamage;
}
