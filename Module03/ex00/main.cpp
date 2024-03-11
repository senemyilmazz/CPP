#include "ClapTrap.hpp"

int main(void) {
    

    ClapTrap senyilma("senyilma");
    // ClapTrap mkati("mkati");

    senyilma.setAttackDamage(2);

    ClapTrap mkati(senyilma);
    // mkati.setAttackDamage(3);

    // while (senyilma.getEnergyPoints() > 0 && senyilma.getHitPoints() > 0 && mkati.getEnergyPoints() >0 && mkati.getHitPoints()  > 0) {
    //     senyilma.attack(mkati.getName());
    //     mkati.takeDamage(senyilma.getAttackDamage());
    //     mkati.beRepaired(1);
    //     mkati.attack(senyilma.getName());
    //     senyilma.takeDamage(mkati.getAttackDamage());
    //     senyilma.beRepaired(1);
    // }
}