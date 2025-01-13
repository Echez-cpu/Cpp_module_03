#include "ClapTrap.hpp"

int main() {
    ClapTrap claptrap1("Clappy");
    ClapTrap claptrap2("Zappy");

    claptrap1.attack("Zappy");
    claptrap2.attack("Clappy");

    claptrap1.takeDamage(5);
    claptrap2.takeDamage(3);

    claptrap1.beRepaired(3);
    claptrap2.beRepaired(2);

    claptrap1.attack("Zappy");
    claptrap1.attack("Zappy");   // Should indicate not enough energy for attack

    return 0;
}
