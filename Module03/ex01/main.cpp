#include "ScavTrap.hpp"

int main(void) {
    

    ScavTrap senyilma("senyilma");
    senyilma.setAttackDamage(2);
    ScavTrap gokyilma(senyilma);
    gokyilma.setName("gokyilma");

    while (senyilma.getHitPoints() >0 && gokyilma.getHitPoints()  > 0) {
        if (gokyilma.getHitPoints() > 0)
        {
            senyilma.attack(gokyilma.getName());
            gokyilma.takeDamage(senyilma.getAttackDamage());
            gokyilma.beRepaired(1);
        }
        if (gokyilma.getHitPoints() > 0)
        {
            gokyilma.attack(senyilma.getName());
            senyilma.takeDamage(gokyilma.getAttackDamage());
            //senyilma.beRepaired(1);
        }
    }
}