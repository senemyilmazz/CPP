
#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap { 
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& copyObject);
        ~ScavTrap();

        using	ClapTrap::operator=;

        void attack(const std::string& target) override;
        void guardGate();
};

#endif