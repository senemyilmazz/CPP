#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public:
        //Constructors
        FragTrap();
        FragTrap(const std::string& name);
        FragTrap(const FragTrap& copyObject);

        //Destructor
        virtual ~FragTrap();

        //Methods
        void attack(const std::string& target);
        void highFivesGuys(void);

        //Operator overloading
        using ClapTrap::operator=;
};

#endif