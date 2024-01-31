#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>

class Zombie {
    private:
        std::string name; 
    public:
        void announce(void);
        void setName(std::string name);
        std::string getName();
        ~Zombie();
};

Zombie* newZombie(std::string name);
void randomChump( std::string name );

#endif