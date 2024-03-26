#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        std::string name;
    public:
        //Constructors
        DiamondTrap();
        DiamondTrap(const std::string& name);
        DiamondTrap(const DiamondTrap& copyObject);

        //Destructor
        ~DiamondTrap();

        //Method
        void attack(const std::string& target);
        void whoAmI();
        
        //Operator Overloading
        using ClapTrap::operator=;
};

#endif