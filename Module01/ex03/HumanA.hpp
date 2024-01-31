#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include <string>

class HumanA {
    private:
        std::string name;
        std::string weapon;
    
    public:
        void attack();
        HumanA(std::string name, std::string weapon);
};

#endif