#include "Zombie.hpp"

int main(void) 
{
    int N = 3;
    Zombie* zombies;

    zombies = zombieHorde(N, "Foo");
    for(int i = 0; i < N; i++) {
        zombies[i].announce();
    }
    delete[] zombies;
}