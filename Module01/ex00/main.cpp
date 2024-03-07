#include "Zombie.hpp"

int main(void)
{
     Zombie* Foo = newZombie("Foo");
     Zombie* Zoo = newZombie("Zoo");
     Zombie* Boo = newZombie("Boo");

     randomChump("Foo");
     randomChump("Zoo");
     randomChump("Boo");

     delete Foo;
     delete Zoo;
     delete Boo;
}