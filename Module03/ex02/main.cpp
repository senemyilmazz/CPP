#include "FragTrap.hpp"

int main(void) {
    
    FragTrap senyilma("senyilma");
    FragTrap gokyilma(senyilma);
    gokyilma.setName("gokyilma");
    FragTrap deryilma;
    deryilma = senyilma;
    deryilma.setName("deryilma");

    // while (senyilma.getHitPoints() >0 && gokyilma.getHitPoints()  > 0) {
    //     if (gokyilma.getHitPoints() > 0)
    //     {
    //         senyilma.attack(gokyilma.getName());
    //         gokyilma.takeDamage(senyilma.getAttackDamage());
    //         gokyilma.beRepaired(1);
    //     }
    //     if (gokyilma.getHitPoints() > 0)
    //     {
    //         gokyilma.attack(senyilma.getName());
    //         senyilma.takeDamage(gokyilma.getAttackDamage());
    //         //senyilma.beRepaired(1);
    //     }
    // }
}