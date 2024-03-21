#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include "Weapon.hpp"
# include <string>

class HumanA {
    private:
        std::string name;
        Weapon& weapon;
    
    public:
        void attack();
        HumanA(std::string name, Weapon &weapon);
};

#endif