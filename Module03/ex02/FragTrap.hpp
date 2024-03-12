#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        //Constructors
        FragTrap();
        FragTrap(const std::string& name);
        FragTrap(const FragTrap& copyObject);

        //Destructor
        ~FragTrap();

        //Methods
        void highFivesGuys(void);

        //Operator overloading
        using ClapTrap::operator=;
};

#endif