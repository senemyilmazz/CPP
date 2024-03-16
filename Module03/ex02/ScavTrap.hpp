
#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap 
{ 
    public:
        //Constructors
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& copyObject);

        //Destructors
        ~ScavTrap();

        //Methods
        void attack(const std::string& target);
        void guardGate();
        
        //Operator Overloading
        using	ClapTrap::operator=;
};

#endif