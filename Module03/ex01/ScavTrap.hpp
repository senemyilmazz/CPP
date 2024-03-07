
#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    private:

    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& copy);
        ScavTrap& operator=(const ScavTrap& copy);
        ~ScavTrap();
};

#endif