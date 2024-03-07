#include "Zombie.hpp"

int main(void) 
{
    Zombie* zombies;
    int N = 3;

    zombies = zombieHorde(N, "Foo");
    for(int i = 0; i < N; i++) 
        zombies[i].announce();
    delete[] zombies;
}