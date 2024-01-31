#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include <string>

class HumanB {
    private:
        std::string name;
        std::string weapon;
    public:
        void attack();
        HumanB(std::string name);
};


#endif