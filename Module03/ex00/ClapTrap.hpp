#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

# include <string>
# include <iostream>

class ClapTrap 
{
    private:

        std::string name;
        int hitPoints;
        int energyPoints;
        int attackDamage;

    public:
    
        ClapTrap();
        ClapTrap(std::string Name);
        ClapTrap(const ClapTrap& copy); //It creates a separate memory block for the new object.-DeepCopy 
        //Default copy constructor does only shallow copy!!
        ClapTrap& operator=(const ClapTrap& copy); //It does not create a separate memory block or new memory space -ShallowCopy
        ~ClapTrap();

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        void setName(std::string name);
        void setHitPoints(int hitPoints);
        void setEnergyPoints(int energyPoints);
        void setAttackDamage(int attackDamage);

        std::string getName() const;
        int getHitPoints() const;
        int getEnergyPoints() const;
        int getAttackDamage() const;
};

#endif