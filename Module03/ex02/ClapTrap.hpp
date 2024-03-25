#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

# include <string>
# include <iostream>

class ClapTrap 
{
    protected:
        //Fields
        std::string name;
        unsigned int hitPoints;
        unsigned int energyPoints;
        unsigned int attackDamage;
        unsigned int maxHit;

    public:
        //Constructors
        ClapTrap();
        ClapTrap(std::string Name);
        ClapTrap(const ClapTrap& copy);
        
        //Destructor
        ~ClapTrap();
        
        //Preporties
        //  Setters
        void setName(std::string name);
        void setHitPoints(unsigned int hitPoints);
        void setEnergyPoints(unsigned int energyPoints);
        void setAttackDamage(unsigned int attackDamage);
        //  Getters
        std::string getName() const;
        int getHitPoints() const;
        int getEnergyPoints() const;
        int getAttackDamage() const;
        
        //Operator Overloading
        ClapTrap& operator=(const ClapTrap& copy);

        //Methods
        virtual void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif